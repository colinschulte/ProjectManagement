#ifndef CLAIM_HPP
#define CLAIM_HPP

#include <string>
#include <vector>

using namespace std;

enum class ClaimStatus {
    Submitted,
    InReview,
    Approved,
    Denied,
    Paid,
    Reopened
};

inline std::string claimStatusToString(ClaimStatus s) {
    switch (s) {
        case ClaimStatus::Submitted: return "Submitted";
        case ClaimStatus::InReview:  return "InReview";
        case ClaimStatus::Approved:  return "Approved";
        case ClaimStatus::Denied:    return "Denied";
        case ClaimStatus::Paid:      return "Paid";
        case ClaimStatus::Reopened:  return "Reopened";
        default: return "Unknown";
    }
}

struct Money {
    int dollars;

    Money() : dollars(0) {}
    Money(int d) : dollars(d) {}

    std::string str() const { return std::to_string(dollars); }
};

class Claim {
public:
    // Identifiers
    string claimId;
    string policyNumber;
    string claimantName;
    string providerName;

    // Clinical / billing
    string dateOfService;
    vector<string> procedureCodes;
    vector<string> diagnosisCodes;

    Money amountCharged;
    Money amountAllowed;
    Money amountPaid;

    ClaimStatus status;
    string statusNote;

    // Timestamps
    string createdAt;
    string updatedAt;

    // Constructors
    Claim();
    Claim(const string &id,
          const string &policy,
          const string &claimant,
          const string &provider,
          const string &dos,
          Money charged);

    // Validation
    bool validate(string &problem) const;

    // Status transitions
    void approve(Money allowed, const string &note);
    void deny(const string &reason);
    void pay(Money paid);
    void reopen(const string &note);

    // Serialization
    string toString() const;

private:
    void markUpdated(const string &time);
};

#endif
