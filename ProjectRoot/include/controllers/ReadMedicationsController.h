#ifndef READ_MEDICATIONS_CONTROLLER_H
#define READ_MEDICATIONS_CONTROLLER_H

#include <vector>
#include <string>

struct MedicationData {
int medication_id;
std::string name;
std::string dosage;
std::string frequency;
std::string refill_date;
};

class ReadMedicationsController {
public:
ReadMedicationsController();
std::vector<MedicationData> loadMedications(int userId);

};

#endif