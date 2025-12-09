#include "models/UserMedication.hpp"

int um_user_id;
int um_medication_id;
int um_doctor_id;
std::string um_start_date;
std::string um_end_date;

// Constructors
UserMedication::UserMedication()
    : um_user_id(0), um_medication_id(0), um_doctor_id(0),
      um_start_date(""), um_end_date("") {}

UserMedication::UserMedication(int um_userId,
                               int um_medId,
                               int um_docId,
                               const std::string& um_startDate,
                               const std::string& um_endDate)
    : um_user_id(um_userId),
      um_medication_id(um_medId),
      um_doctor_id(um_docId),
      um_start_date(um_startDate),
      um_end_date(um_endDate) {}

// Getters
int getUMUserId()  { return um_user_id; }
int getUMMedicationId()  { return um_medication_id; }
int getUMDoctorId()  { return um_doctor_id; }
std::string getUMStartDate()  { return um_start_date; }
std::string getUMEndDate()  { return um_end_date; }

// Setters
void setUMUserId(int id) { um_user_id = id; }
void setUMMedicationId(int id) { um_medication_id = id; }
void setUMDoctorId(int id) { um_doctor_id = id; }
void setUMStartDate(const std::string& date) { um_start_date = date; }
void setUMEndDate(const std::string& date) { um_end_date = date; }

// toString
std::string UserMedication::toStringUserMeds() const {
    std::ostringstream oss;
    oss << "UserMedication[UserID=" << um_user_id
        << ", MedicationID=" << um_medication_id
        << ", DoctorID=" << um_doctor_id
        << ", StartDate=" << um_start_date
        << ", EndDate=" << um_end_date
        << "]";
    return oss.str();
}