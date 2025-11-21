#include "claim.h"
using namespace std;

Claim::Claim()
    : amountCharged(0),
      amountAllowed(Money(0)),
      amountPaid(Money(0)),
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
      amountAllowed(Money(0)),
      amountPaid(Money(0)),
      status(ClaimStatus::Submitted)
{
    createdAt = "N/A";
    updatedAt = "N/A";
}

bool Claim::validate(string &problem) const {
    if (claimId.empty())       { problem = "claimId empty"; return false; }
    if (policyNumber.empty())  { problem = "policyNumber empty"; return false; }
    if (claimantName.empty())  { problem = "claimantName empty"; return false; }
    if (dateOfService.empty()) { problem = "dateOfService empty"; return false; }
    return true;
}

void Claim::approve(Money allowed, const string &note) {
    status = ClaimStatus::Approved;
    amountAllowed = allowed;
    statusNote = note;
    markUpdated("Updated");
}

void Claim::deny(const string &reason) {
    status = ClaimStatus::Denied;
    statusNote = reason;
    amountAllowed = Money(0);
    markUpdated("Updated");
}

void Claim::pay(Money paid) {
    amountPaid = paid;
    status = ClaimStatus::Paid;
    markUpdated("Updated");
}

void Claim::reopen(const string &note) {
    status = ClaimStatus::Reopened;
    statusNote = note;
    markUpdated("Updated");
}

void Claim::markUpdated(const string &time) {
    updatedAt = time;
}

string Claim::toString() const {
    return "Claim[" + claimId + "] policy=" + policyNumber +
           " claimant=" + claimantName +
           " provider=" + providerName +
           " dos=" + dateOfService +
           " charged=$" + amountCharged.str() +
           " allowed=$" + amountAllowed.str() +
           " paid=$" + amountPaid.str() +
           " status=" + claimStatusToString(status) +
           " note=" + statusNote;
}
