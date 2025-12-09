#include "views/MedicationsView.hpp"

void MedicationsView::display(const std::vector<UserMedication>& userMeds,
                              const std::vector<Medication>& allMeds)
{
    std::cout << "=========================" << std::endl;
    std::cout << "       MEDICATIONS       " << std::endl;
    std::cout << "=========================" << std::endl;

    if (userMeds.empty()) {
        std::cout << "No medications assigned to this user." << std::endl;
    } else {
        for (size_t i = 0; i < userMeds.size(); i++) {
            const UserMedication& um = userMeds[i];

            // Find medication details by ID
            const Medication* medPtr = nullptr;
            for (const auto& m : allMeds) {
                if (m.medication_id == um.um_medication_id) {
                    medPtr = &m;
                    break;
                }
            }

            std::cout << "\nMedication " << (i + 1) << ":" << std::endl;
            std::cout << "-------------------------" << std::endl;

            if (medPtr) {
                std::cout << "Name:              " << medPtr->medication_name << std::endl;
                std::cout << "Dosage:            " << medPtr->medication_dosage << std::endl;
                std::cout << "Frequency:         " << medPtr->medication_frequency << std::endl;
                std::cout << "Refills Remaining: " << medPtr->medication_number_of_refills << std::endl;
                std::cout << "Next Refill Date:  " << medPtr->medication_refill_date << std::endl;
            } else {
                std::cout << "Medication Details: NOT FOUND" << std::endl;
            }

            std::cout << "Start Date:        " << um.um_start_date << std::endl;
            std::cout << "End Date:          " << um.um_end_date << std::endl;
            std::cout << "Prescribing Doctor ID: " << um.um_doctor_id << std::endl;
        }
    }

    std::cout << "\nOptions:" << std::endl;
    std::cout << "1. Add Medication" << std::endl;
    std::cout << "2. Back to Home" << std::endl;
    std::cout << "Select an option: ";
}
