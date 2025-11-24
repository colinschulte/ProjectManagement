#ifndef MEDICATION_HPP
#define MEDICATION_HPP

#include <string>

class Medication {
public:
int medication_id;
int insurance_id;
std::string name;
std::string dosage;
std::string frequency;
int number_of_refills;
std::string refill_date;

----------------------------------------------------------------------------------------------------------------------------------------------
Medication() = default;
Medication(int medId,
           int insId,
           const std::string& medName,
           const std::string& medDosage,
           const std::string& medFrequency,
           int refills,
           const std::string& refillDate)
         : medication_id(medId),
   insurance_id(insId),
   name(medName),
   dosage(medDosage),
   frequency(medFrequency),
   number_of_refills(refills),
   refill_date(refillDate) {}

};

#endif