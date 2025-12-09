#ifndef INSURANCE_HPP
#define INSURANCE_HPP

#include <string>
#include <sstream>


class Insurance {
private:
    int insurance_id;
    std::string providerName;
    std::string policyNumber;
    std::string coverageDetails;
    std::string startDate;
    std::string endDate;

public:
    // Constructor
	Insurance();
    Insurance(int insId,
              const std::string& insProvider,
              const std::string& insPolicyNum,
              const std::string& insCoverage,
              const std::string& insStart,
              const std::string& insEnd);

    // Getters
    int getInsuranceId();
    std::string getInsProviderName();
    std::string getInsPolicyNumber();
    std::string getInsCoverageDetails();
    std::string getInsStartDate();
    std::string getInsEndDate();

    // Setters
    void setInsProviderName(const std::string& provider);
    void setInsPolicyNumber(const std::string& policyNum);
    void setInsCoverageDetails(const std::string& coverage);
    void setInsStartDate(const std::string& start);
    void setInsEndDate(const std::string& end);

    std::string toStringIns() const;
};

#endif // INSURANCE_HPP
