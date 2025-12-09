#include "models/Medication.hpp"


int medication_id;
int medication_insurance_id;
std::string medication_name;
std::string medication_dosage;
std::string medication_frequency;
int medication_number_of_refills;
std::string medication_refill_date;
// Constructors
Medication::Medication()
    : medication_id(0), medication_insurance_id(0), medication_name(""), medication_dosage(""),
      medication_frequency(""), medication_number_of_refills(0), medication_refill_date("") {}

Medication::Medication(int medId,
                       int medInsId,
                       const std::string& medName,
                       const std::string& medDosage,
                       const std::string& medFrequency,
                       int medRefills,
                       const std::string& medRefillDate)
    : medication_id(medId),
      medication_insurance_id(medInsId),
      medication_name(medName),
      medication_dosage(medDosage),
      medication_frequency(medFrequency),
      medication_number_of_refills(medRefills),
      medication_refill_date(medRefillDate) {}

// Getters
int getId()  { return medication_id; }
int getInsuranceId()  { return medication_insurance_id; }
std::string getName()  { return medication_name; }
std::string getDosage()  { return medication_dosage; }
std::string getFrequency()  { return medication_frequency; }
int getRefillCount() { return medication_number_of_refills; }
std::string getRefillDate() { return medication_refill_date; }

// Setters
void setId(int id) { medication_id = id; }
void setInsuranceId(int id) { medication_insurance_id = id; }
void setName(const std::string& n) { medication_name = n; }
void setDosage(const std::string& d) { medication_dosage = d; }
void setFrequency(const std::string& f) { medication_frequency = f; }
void setRefillCount(int count) { medication_number_of_refills = count; }
void setRefillDate(const std::string& date) { medication_refill_date = date; }

// toString
std::string Medication::toStringMed() const {
    std::ostringstream oss;
    oss << "Medication[ID=" << medication_id
        << ", InsuranceID=" << medication_insurance_id
        << ", Name=" << medication_name
        << ", Dosage=" << medication_dosage
        << ", Frequency=" << medication_frequency
        << ", Refills=" << medication_number_of_refills
        << ", RefillDate=" << medication_refill_date
        << "]";
    return oss.str();
}