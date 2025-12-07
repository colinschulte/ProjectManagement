#ifndef MEDICATION_HPP
#define MEDICATION_HPP

#include <string>
#include <sstream>

class Medication {
private:
    int medication_id;
    int insurance_id;
    std::string name;
    std::string dosage;
    std::string frequency;
    int number_of_refills;
    std::string refill_date;

public:
    Medication();
    Medication(int medId,
               int insId,
               const std::string& medName,
               const std::string& medDosage,
               const std::string& medFrequency,
               int refills,
               const std::string& refillDate);

    // Getters
    int getId() const;
    int getInsuranceId() const;
    std::string getName() const;
    std::string getDosage() const;
    std::string getFrequency() const;
    int getRefillCount() const;
    std::string getRefillDate() const;

    // Setters
    void setId(int id);
    void setInsuranceId(int id);
    void setName(const std::string& n);
    void setDosage(const std::string& d);
    void setFrequency(const std::string& f);
    void setRefillCount(int count);
    void setRefillDate(const std::string& date);

    std::string toString() const;
};

#endif
