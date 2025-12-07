#include "Claim.hpp"
<<<<<<< HEAD

// Constructors
Claim::Claim()
    : claim_id(""), policy_number(""), claimant_name(""), provider_name(""),
      date_of_service(""), amount_charged(0), amount_allowed(0),
      amount_paid(0), status("Submitted"), status_note("") {}

Claim::Claim(const std::string& id,
             const std::string& policy,
             const std::string& claimant,
             const std::string& provider,
             const std::string& dos,
             double charged)
    : claim_id(id), policy_number(policy), claimant_name(claimant),
      provider_name(provider), date_of_service(dos), amount_charged(charged),
      amount_allowed(0), amount_paid(0), status("Submitted"), status_note("") {}

// Getters
std::string Claim::getId() const { return claim_id; }
std::string Claim::getPolicyNumber() const { return policy_number; }
std::string Claim::getClaimantName() const { return claimant_name; }
std::string Claim::getProviderName() const { return provider_name; }
std::string Claim::getDateOfService() const { return date_of_service; }
double Claim::getAmountCharged() const { return amount_charged; }
double Claim::getAmountAllowed() const { return amount_allowed; }
double Claim::getAmountPaid() const { return amount_paid; }
std::string Claim::getStatus() const { return status; }
std::string Claim::getStatusNote() const { return status_note; }

// Setters
void Claim::setId(const std::string& id) { claim_id = id; }
void Claim::setPolicyNumber(const std::string& policy) { policy_number = policy; }
void Claim::setClaimantName(const std::string& name) { claimant_name = name; }
void Claim::setProviderName(const std::string& name) { provider_name = name; }
void Claim::setDateOfService(const std::string& dos) { date_of_service = dos; }
void Claim::setAmountCharged(double amt) { if(amt>=0) amount_charged = amt; }
void Claim::setAmountAllowed(double amt) { if(amt>=0) amount_allowed = amt; }
void Claim::setAmountPaid(double amt) { if(amt>=0) amount_paid = amt; }
void Claim::setStatus(const std::string& s) { status = s; }
void Claim::setStatusNote(const std::string& note) { status_note = note; }

// Validation
bool Claim::validate(std::string& problem) const {
    if(claim_id.empty()) { problem = "Claim ID is empty"; return false; }
    if(policy_number.empty()) { problem = "Policy number is empty"; return false; }
    if(claimant_name.empty()) { problem = "Claimant name is empty"; return false; }
    if(provider_name.empty()) { problem = "Provider name is empty"; return false; }
    if(amount_charged < 0) { problem = "Amount charged cannot be negative"; return false; }
    return true;
}

// toString
std::string Claim::toString() const {
    std::ostringstream oss;
    oss << "Claim[ID=" << claim_id
        << ", PolicyNumber=" << policy_number
        << ", Claimant=" << claimant_name
        << ", Provider=" << provider_name
        << ", DateOfService=" << date_of_service
        << ", Charged=" << amount_charged
        << ", Allowed=" << amount_allowed
        << ", Paid=" << amount_paid
        << ", Status=" << status
        << ", Note=" << status_note
        << "]";
    return oss.str();
=======
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
>>>>>>> origin
}
