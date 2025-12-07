#ifndef INSURANCE_HPP
#define INSURANCE_HPP

#include <string>
<<<<<<< HEAD
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
=======
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
>>>>>>> origin
    Insurance(int id,
              const std::string& provider,
              const std::string& policyNum,
              const std::string& coverage,
              const std::string& start,
              const std::string& end);

<<<<<<< HEAD
    int getId() const;
=======
    // Getters
    int getInsuranceId() const;
>>>>>>> origin
    std::string getProviderName() const;
    std::string getPolicyNumber() const;
    std::string getCoverageDetails() const;
    std::string getStartDate() const;
    std::string getEndDate() const;

<<<<<<< HEAD
=======
    // Setters
>>>>>>> origin
    void setProviderName(const std::string& provider);
    void setPolicyNumber(const std::string& policyNum);
    void setCoverageDetails(const std::string& coverage);
    void setStartDate(const std::string& start);
    void setEndDate(const std::string& end);

<<<<<<< HEAD
    std::string toString() const;
};

#endif
=======
    // Optional: Display function
    void displayInfo() const;
};

#endif // INSURANCE_HPP
>>>>>>> origin
