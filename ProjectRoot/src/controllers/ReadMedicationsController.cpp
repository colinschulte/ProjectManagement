#include "../../include/controllers/ReadMedicationsController.h"

ReadMedicationsController::ReadMedicationsController() {}

std::vector<MedicationData> ReadMedicationsController::loadMedications(int userId) {
std::vector<MedicationData> result;
MedicationData sample; sample.medication_id = 3; sample.name = "Amoxicillin"; sample.dosage = "500mg"; sample.frequency = "Twice daily"; sample.refill_date = "2025-02-01"; result.push_back(sample); return result;

}