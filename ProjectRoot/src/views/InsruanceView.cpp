#include "InsuranceView.h"

void InsuranceView::display(const std::vector<Insurance>& policies) {
    std::cout << "=========================" << std::endl;
    std::cout << "        INSURANCE         " << std::endl;
    std::cout << "=========================" << std::endl;

    if (policies.empty()) {
        std::cout << "No insurance policies found." << std::endl;
    } else {
        for (size_t i = 0; i < policies.size(); i++) {
            const Insurance& ins = policies[i];

            std::cout << "\nPolicy " << (i + 1) << ":" << std::endl;
            std::cout << "-------------------------" << std::endl;
            std::cout << "Insurance ID:   " << ins.getInsuranceId() << std::endl;
            std::cout << "Provider:       " << ins.getProviderName() << std::endl;
            std::cout << "Policy Number:  " << ins.getPolicyNumber() << std::endl;
            std::cout << "Coverage:       " << ins.getCoverageDetails() << std::endl;
            std::cout << "Start Date:     " << ins.getStartDate() << std::endl;
            std::cout << "End Date:       " << ins.getEndDate() << std::endl;
        }
    }

    std::cout << "\nOptions:" << std::endl;
    std::cout << "1. View Claims" << std::endl;
    std::cout << "2. Back to Home" << std::endl;
    std::cout << "Select an option: ";
}
