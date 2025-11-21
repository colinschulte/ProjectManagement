#ifndef INSURANCE_H
#define INSURANCE_H

#include <string>
#include <iostream>
using namespace std;

class Insurance {
private:
    int insuranceId;
    string providerName;
    string policyNumber;
    string coverageDetails;
    string startDate;
    string endDate;

public:
    // Constructor
    Insurance(int id, const string& provider, const string& policyNum,
              const string& coverage, const string& start, const string& end);

    // Getters
    int getInsuranceId() const;
    string getProviderName() const;
    string getPolicyNumber() const;
    string getCoverageDetails() const;
    string getStartDate() const;
    string getEndDate() const;

    // Setters
    void setProviderName(const string& provider);
    void setPolicyNumber(const string& policyNum);
    void setCoverageDetails(const string& coverage);
    void setStartDate(const string& start);
    void setEndDate(const string& end);

    // Optional: Display function
    void displayInfo() const;
};

#endif
