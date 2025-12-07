#ifndef USERMEDICATION_HPP
#define USERMEDICATION_HPP

#include <string>
#include <sstream>

class UserMedication {
private:
    int user_id;
    int medication_id;
    int doctor_id;
    std::string start_date;
    std::string end_date;

public:
    UserMedication();
    UserMedication(int userId,
                   int medId,
                   int docId,
                   const std::string& startDate,
                   const std::string& endDate);

    // Getters
    int getUserId() const;
    int getMedicationId() const;
    int getDoctorId() const;
    std::string getStartDate() const;
    std::string getEndDate() const;

    // Setters
    void setUserId(int id);
    void setMedicationId(int id);
    void setDoctorId(int id);
    void setStartDate(const std::string& date);
    void setEndDate(const std::string& date);

    std::string toString() const;
};

#endif