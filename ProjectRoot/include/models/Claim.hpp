#ifndef CLAIM_HPP
#define CLAIM_HPP

#include <string>
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