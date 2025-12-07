#ifndef CLAIM_HPP
#define CLAIM_HPP

#include <string>
<<<<<<< HEAD
#include <sstream>

class Claim {
private:
    std::string claim_id;
    std::string policy_number;
    std::string claimant_name;
    std::string provider_name;
    std::string date_of_service;
    double amount_charged;
    double amount_allowed;
    double amount_paid;
    std::string status;
    std::string status_note;

public:
    Claim();
    Claim(const std::string& id,
          const std::string& policy,
          const std::string& claimant,
          const std::string& provider,
          const std::string& dos,
          double charged);

    // Getters
    std::string getId() const;
    std::string getPolicyNumber() const;
    std::string getClaimantName() const;
    std::string getProviderName() const;
    std::string getDateOfService() const;
    double getAmountCharged() const;
    double getAmountAllowed() const;
    double getAmountPaid() const;
    std::string getStatus() const;
    std::string getStatusNote() const;

    // Setters
    void setId(const std::string& id);
    void setPolicyNumber(const std::string& policy);
    void setClaimantName(const std::string& name);
    void setProviderName(const std::string& name);
    void setDateOfService(const std::string& dos);
    void setAmountCharged(double amt);
    void setAmountAllowed(double amt);
    void setAmountPaid(double amt);
    void setStatus(const std::string& s);
    void setStatusNote(const std::string& note);

    // Validation
    bool validate(std::string& problem) const;

    std::string toString() const;
};

#endif
=======
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
>>>>>>> origin
