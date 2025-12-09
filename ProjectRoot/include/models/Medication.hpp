#ifndef MEDICATION_HPP
#define MEDICATION_HPP

#include <string>
#include <sstream>

class Medication {
public:
int medication_id;
int medication_insurance_id;
std::string medication_name;
std::string medication_dosage;
std::string medication_frequency;
int medication_number_of_refills;
std::string medication_refill_date;


Medication();
Medication(int medId,
           int medInsId,
           const std::string& medName,
           const std::string& medDosage,
           const std::string& medFrequency,
           int medRefills,
           const std::string& medRefillDate);

   std::string toStringMed() const;
};

#endif
