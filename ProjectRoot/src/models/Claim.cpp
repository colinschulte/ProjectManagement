#include "Claim.hpp"
#include <iostream>

// ==============================
//        Constructors
// ==============================
Claim::Claim()
    : amountCharged(0), amountAllowed(0), amountPaid(0),
      status(ClaimStatus::Submitted) {}

Claim::Claim(const string &id,
             const string &policy,
             const string &claimant,
             const string &provider,
             const string &dos,
             Money charged)
    : claimId(id),
      policyNumber(policy),
      claimantName(claimant),
      providerName(provider),
      dateOfService(dos),
      amountCharged(charged),
      amountAllowed(0),
      amountPaid(0),
      status(ClaimStatus::Submitted) {}

// ==============================
//        Validation
// ==============================
bool Claim::validate(string &problem) const {
    if (claimId.empty()) { problem = "Claim ID is empty"; return false; }
    if (policyNumber.empty()) { problem = "Policy number is empty"; return false; }
    if (claimantName.empty()) { problem = "Claimant name is empty"; return false; }
    if (providerName.empty()) { problem = "Provider name is empty"; return false; }
    if (amountCharged.dollars < 0) { problem = "Amount charged cannot be negative"; return false; }
    return true;
}

// ==============================
//      Status Transitions
// ==============================
void Claim::approve(Money allowed, const string &note) {
    amountAllowed = allowed;
    status = ClaimStatus::Approved;
    statusNote = note;
}

void Claim::deny(const string &reason) {
    status = ClaimStatus::Denied;
    statusNote = reason;
}

void Claim::pay(Money paid) {
    amountPaid = paid;
    status = ClaimStatus::Paid;
}

void Claim::reopen(const string &note) {
    status = ClaimStatus::Reopened;
    statusNote = note;
}

// ==============================
//       Serialization
// ==============================
string Claim::toString() const {
    string out = "Claim ID: " + claimId + "\n";
    out += "Policy Number: " + policyNumber + "\n";
    out += "Claimant: " + claimantName + "\n";
    out += "Provider: " + providerName + "\n";
    out += "Date of Service: " + dateOfService + "\n";
    out += "Amount Charged: $" + amountCharged.str() + "\n";
    out += "Amount Allowed: $" + amountAllowed.str() + "\n";
    out += "Amount Paid: $" + amountPaid.str() + "\n";
    out += "Status: " + claimStatusToString(status) + "\n";
    out += "Status Note: " + statusNote + "\n";
    out += "Created At: " + createdAt + "\n";
    out += "Updated At: " + updatedAt + "\n";
    return out;
}

// ==============================
//        Private Helpers
// ==============================
void Claim::markUpdated(const string &time) {
    updatedAt = time;
}
