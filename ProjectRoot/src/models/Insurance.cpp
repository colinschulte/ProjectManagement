#include "models/Insurance.hpp"
#include <iostream>

using namespace std;

int insurance_id;
string providerName;
std::string policyNumber;
std::string coverageDetails;
std::string startDate;
std::string endDate;

// Constructor
Insurance::Insurance()= default;
Insurance::Insurance(int insId, const string& insProvider, const string& insPolicyNum,
                     const string& insCoverage, const string& insStart, const string& insEnd)
    : insurance_id(insId), providerName(insProvider), policyNumber(insPolicyNum),
      coverageDetails(insCoverage), startDate(insStart), endDate(insEnd) {}

// Getters
int Insurance::getInsuranceId() {
    return insurance_id;
}

string Insurance::getInsProviderName() {
    return providerName;
}

string Insurance::getInsPolicyNumber() {
    return policyNumber;
}

string Insurance::getInsCoverageDetails() {
    return coverageDetails;
}

string Insurance::getInsStartDate() {
    return startDate;
}

string Insurance::getInsEndDate() {
    return endDate;
}

// Setters
void Insurance::setInsProviderName(const string& provider) {
    providerName = provider;
}

void Insurance::setInsPolicyNumber(const string& policyNum) {
    policyNumber = policyNum;
}

void Insurance::setInsCoverageDetails(const string& coverage) {
    coverageDetails = coverage;
}

void Insurance::setInsStartDate(const string& start) {
    startDate = start;
}

void Insurance::setInsEndDate(const string& end) {
    endDate = end;
}

// Display function
std::string Insurance::toStringIns() const{
    std::ostringstream oss;
    oss  << "Insurance ID: " << insurance_id
         << "Provider: " << providerName
         << "Policy Number: " << policyNumber
         << "Coverage: " << coverageDetails
         << "Start Date: " << startDate
         << "End Date: " << endDate
        << "]";
        return oss.str();
}
