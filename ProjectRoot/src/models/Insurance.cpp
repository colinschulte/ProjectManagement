#include "Insurance.hpp"

// Constructors
Insurance::Insurance()
    : insurance_id(0), provider_name(""), policy_number(""),
      coverage_details(""), start_date(""), end_date("") {}

Insurance::Insurance(int id,
                     const std::string& provider,
                     const std::string& policyNum,
                     const std::string& coverage,
                     const std::string& start,
                     const std::string& end)
    : insurance_id(id), provider_name(provider), policy_number(policyNum),
      coverage_details(coverage), start_date(start), end_date(end) {}

// Getters
int Insurance::getId() const { return insurance_id; }
std::string Insurance::getProviderName() const { return provider_name; }
std::string Insurance::getPolicyNumber() const { return policy_number; }
std::string Insurance::getCoverageDetails() const { return coverage_details; }
std::string Insurance::getStartDate() const { return start_date; }
std::string Insurance::getEndDate() const { return end_date; }

// Setters
void Insurance::setProviderName(const std::string& provider) { provider_name = provider; }
void Insurance::setPolicyNumber(const std::string& policyNum) { policy_number = policyNum; }
void Insurance::setCoverageDetails(const std::string& coverage) { coverage_details = coverage; }
void Insurance::setStartDate(const std::string& start) { start_date = start; }
void Insurance::setEndDate(const std::string& end) { end_date = end; }

// toString
std::string Insurance::toString() const {
    std::ostringstream oss;
    oss << "Insurance[ID=" << insurance_id
        << ", Provider=" << provider_name
        << ", PolicyNumber=" << policy_number
        << ", Coverage=" << coverage_details
        << ", StartDate=" << start_date
        << ", EndDate=" << end_date
        << "]";
    return oss.str();
}
