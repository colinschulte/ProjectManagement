#ifndef INSURANCE_HPP
#define INSURANCE_HPP

#include <string>
#include <iostream>

class Insurance {
private:
    int insuranceId;
    std::string providerName;
    std::string policyNumber;
    std::string coverageDetails;
    std::string startDate;
    std::string endDate;

public:
    // Constructor
    Insurance(int id,
              const std::string& provider,
              const std::string& policyNum,
              const std::string& coverage,
              const std::string& start,
              const std::string& end);

    // Getters
    int getInsuranceId() const;
    std::string getProviderName() const;
    std::string getPolicyNumber() const;
    std::string getCoverageDetails() const;
    std::string getStartDate() const;
    std::string getEndDate() const;

    // Setters
    void setProviderName(const std::string& provider);
    void setPolicyNumber(const std::string& policyNum);
    void setCoverageDetails(const std::string& coverage);
    void setStartDate(const std::string& start);
    void setEndDate(const std::string& end);

    // Optional: Display function
    void displayInfo() const;
};

#endif // INSURANCE_HPP
