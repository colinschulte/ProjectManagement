#include "Medication.hpp"

// Constructors
Medication::Medication()
    : medication_id(0), insurance_id(0), name(""), dosage(""),
      frequency(""), number_of_refills(0), refill_date("") {}

Medication::Medication(int medId,
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

// Getters
int Medication::getId() const { return medication_id; }
int Medication::getInsuranceId() const { return insurance_id; }
std::string Medication::getName() const { return name; }
std::string Medication::getDosage() const { return dosage; }
std::string Medication::getFrequency() const { return frequency; }
int Medication::getRefillCount() const { return number_of_refills; }
std::string Medication::getRefillDate() const { return refill_date; }

// Setters
void Medication::setId(int id) { medication_id = id; }
void Medication::setInsuranceId(int id) { insurance_id = id; }
void Medication::setName(const std::string& n) { name = n; }
void Medication::setDosage(const std::string& d) { dosage = d; }
void Medication::setFrequency(const std::string& f) { frequency = f; }
void Medication::setRefillCount(int count) { number_of_refills = count; }
void Medication::setRefillDate(const std::string& date) { refill_date = date; }

// toString
std::string Medication::toString() const {
    std::ostringstream oss;
    oss << "Medication[ID=" << medication_id
        << ", InsuranceID=" << insurance_id
        << ", Name=" << name
        << ", Dosage=" << dosage
        << ", Frequency=" << frequency
        << ", Refills=" << number_of_refills
        << ", RefillDate=" << refill_date
        << "]";
    return oss.str();
}