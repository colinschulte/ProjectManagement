#include "Insurance.hpp"
#include <iostream>

// =============================
//      Constructor
// =============================
Insurance::Insurance(int id,
                     const std::string& provider,
                     const std::string& policyNum,
                     const std::string& coverage,
                     const std::string& start,
                     const std::string& end)
    : insuranceId(id),
      providerName(provider),
      policyNumber(policyNum),
      coverageDetails(coverage),
      startDate(start),
      endDate(end) {}


// =============================
//          Getters
// =============================
int Insurance::getInsuranceId() const {
    return insuranceId;
}

std::string Insurance::getProviderName() const {
    return providerName;
}

std::string Insurance::getPolicyNumber() const {
    return policyNumber;
}

std::string Insurance::getCoverageDetails() const {
    return coverageDetails;
}

std::string Insurance::getStartDate() const {
    return startDate;
}

std::string Insurance::getEndDate() const {
    return endDate;
}


// =============================
//          Setters
// =============================
void Insurance::setProviderName(const std::string& provider) {
    providerName = provider;
}

void Insurance::setPolicyNumber(const std::string& policyNum) {
    policyNumber = policyNum;
}

void Insurance::setCoverageDetails(const std::string& coverage) {
    coverageDetails = coverage;
}

void Insurance::setStartDate(const std::string& start) {
    startDate = start;
}

void Insurance::setEndDate(const std::string& end) {
    endDate = end;
}


// =============================
//     Display Single Policy
// =============================
void Insurance::displayInfo() const {
    std::cout << "==============================\n";
    std::cout << "      INSURANCE DETAILS       \n";
    std::cout << "==============================\n";
    std::cout << "Insurance ID:     " << insuranceId << "\n";
    std::cout << "Provider Name:    " << providerName << "\n";
    std::cout << "Policy Number:    " << policyNumber << "\n";
    std::cout << "Coverage Details: " << coverageDetails << "\n";
    std::cout << "Start Date:       " << startDate << "\n";
    std::cout << "End Date:         " << endDate << "\n";
    std::cout << "==============================\n\n";
}
