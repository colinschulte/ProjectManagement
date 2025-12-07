#include "../../include/controllers/ReadInsuranceController.h"

ReadInsuranceController::ReadInsuranceController() {}

std::vector<InsuranceData> ReadInsuranceController::loadInsurance(int userId) {
std::vector<InsuranceData> result;
InsuranceData sample; sample.insurance_id = 3; sample.provider_name = "Medicare"; sample.policy_number = "24601"; sample.coverage_details = "Full Coverage"; sample.start_date = "2025-02-01"; sample.end_date = "2027-02-01"; result.push_back(sample); return result;

}