#ifndef READ_INSURANCE_CONTROLLER_H
#define READ_INSURANCE_CONTROLLER_H

#include <vector>
#include <string>

struct InsuranceData {
	int insurance_id;
	std::string provider_name;
    std::string policy_number;
    std::string coverage_details;
    std::string start_date;
    std::string end_date;
};

class ReadInsuranceController {
public:
ReadInsuranceController();
std::vector<InsuranceData> loadInsurance(int userId);

};

#endif