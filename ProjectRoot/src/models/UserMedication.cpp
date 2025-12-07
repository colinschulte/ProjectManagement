#include "UserMedication.hpp"

// Constructors
UserMedication::UserMedication()
    : user_id(0), medication_id(0), doctor_id(0),
      start_date(""), end_date("") {}

UserMedication::UserMedication(int userId,
                               int medId,
                               int docId,
                               const std::string& startDate,
                               const std::string& endDate)
    : user_id(userId),
      medication_id(medId),
      doctor_id(docId),
      start_date(startDate),
      end_date(endDate) {}

// Getters
int UserMedication::getUserId() const { return user_id; }
int UserMedication::getMedicationId() const { return medication_id; }
int UserMedication::getDoctorId() const { return doctor_id; }
std::string UserMedication::getStartDate() const { return start_date; }
std::string UserMedication::getEndDate() const { return end_date; }

// Setters
void UserMedication::setUserId(int id) { user_id = id; }
void UserMedication::setMedicationId(int id) { medication_id = id; }
void UserMedication::setDoctorId(int id) { doctor_id = id; }
void UserMedication::setStartDate(const std::string& date) { start_date = date; }
void UserMedication::setEndDate(const std::string& date) { end_date = date; }

// toString
std::string UserMedication::toString() const {
    std::ostringstream oss;
    oss << "UserMedication[UserID=" << user_id
        << ", MedicationID=" << medication_id
        << ", DoctorID=" << doctor_id
        << ", StartDate=" << start_date
        << ", EndDate=" << end_date
        << "]";
    return oss.str();
}