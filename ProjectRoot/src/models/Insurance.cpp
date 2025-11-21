#include "insurance.h"

using namespace std;

// Constructor
Insurance::Insurance(int id, const string& provider, const string& policyNum,
                     const string& coverage, const string& start, const string& end)
    : insuranceId(id), providerName(provider), policyNumber(policyNum),
      coverageDetails(coverage), startDate(start), endDate(end) {}

// Getters
int Insurance::getInsuranceId() const {
    return insuranceId;
}

string Insurance::getProviderName() const {
    return providerName;
}

string Insurance::getPolicyNumber() const {
    return policyNumber;
}

string Insurance::getCoverageDetails() const {
    return coverageDetails;
}

string Insurance::getStartDate() const {
    return startDate;
}

string Insurance::getEndDate() const {
    return endDate;
}

// Setters
void Insurance::setProviderName(const string& provider) {
    providerName = provider;
}

void Insurance::setPolicyNumber(const string& policyNum) {
    policyNumber = policyNum;
}

void Insurance::setCoverageDetails(const string& coverage) {
    coverageDetails = coverage;
}

void Insurance::setStartDate(const string& start) {
    startDate = start;
}

void Insurance::setEndDate(const string& end) {
    endDate = end;
}

// Display function
void Insurance::displayInfo() const {
    cout << "Insurance ID: " << insuranceId << endl;
    cout << "Provider: " << providerName << endl;
    cout << "Policy Number: " << policyNumber << endl;
    cout << "Coverage: " << coverageDetails << endl;
    cout << "Start Date: " << startDate << endl;
    cout << "End Date: " << endDate << endl;
}