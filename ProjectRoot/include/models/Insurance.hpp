#ifndef INSURANCE_HPP
#define INSURANCE_HPP

#include <string>
#include <sstream>

class Insurance {
private:
    int insurance_id;
    std::string provider_name;
    std::string policy_number;
    std::string coverage_details;
    std::string start_date;
    std::string end_date;

public:
    Insurance();
    Insurance(int id,
              const std::string& provider,
              const std::string& policyNum,
              const std::string& coverage,
              const std::string& start,
              const std::string& end);

    int getId() const;
    std::string getProviderName() const;
    std::string getPolicyNumber() const;
    std::string getCoverageDetails() const;
    std::string getStartDate() const;
    std::string getEndDate() const;

    void setProviderName(const std::string& provider);
    void setPolicyNumber(const std::string& policyNum);
    void setCoverageDetails(const std::string& coverage);
    void setStartDate(const std::string& start);
    void setEndDate(const std::string& end);

    std::string toString() const;
};

#endif