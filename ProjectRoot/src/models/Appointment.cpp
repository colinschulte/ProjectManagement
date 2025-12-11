#include "models/Appointment.hpp"
#include <string>

// --------------------
// Constructors
// --------------------
int appointment_id;
std::string appointment_date;
std::string appointment_time;
std::string appointment_doctor_id;
std::string appointment_insurance_id;
std::string appointment_claim_id;
std::string appointment_reason;
std::string appointment_status;
std::string appointment_emergency_contact;

Appointment::Appointment()
      :appointment_id(0),
      appointment_date(""),
      appointment_time(""),
      appointment_doctor_id(0),
      appointment_insurance_id(0),
      appointment_claim_id(0),
      appointment_reason(""),
      appointment_status(""),
      appointment_emergency_contact("") {}

Appointment::Appointment(int apptId,
    const std::string& apptDate,
    const std::string& apptTime,
    const std::string& apptDocId,
    const std::string& apptInsId,
    const std::string& apptClaimId,
    const std::string& apptReason,
    const std::string& apptStatus,
    const std::string& apptEmerCont)
    : appointment_id(apptId),
      appointment_date(apptDate),
      appointment_time(apptTime),
      appointment_doctor_id(apptDocId),
      appointment_insurance_id(apptInsId),
      appointment_claim_id(apptInsId),
      appointment_reason(apptReason),
      appointment_status(apptStatus),
      appointment_emergency_contact(apptEmerCont){}


// --------------------
// Getters
// --------------------

int Appointment::getApptId()  { return appointment_id; }
std::string Appointment::getApptDate()  { return appointment_date; }
std::string Appointment::getApptTime()  { return appointment_time; }
std::string Appointment::getApptDrId()  { return appointment_doctor_id; }
std::string Appointment::getApptInsId()  { return appointment_insurance_id; }
std::string Appointment::getApptClaimId()  { return appointment_claim_id; }
std::string Appointment::getApptReason()  { return appointment_reason; }
std::string Appointment::getApptStatus()  { return appointment_status; }
std::string Appointment::getApptEmgCont()  { return appointment_emergency_contact; }


/* // --------------------
// Basic validation (no regex, no extra includes)
// --------------------

bool Appointment::isValidEmail(const std::string& email) {
    return email.find('@') != std::string::npos &&
           email.find('.') != std::string::npos;
}

bool Appointment::isValidPhone(const std::string& phone) {
    for (char c : phone) {
        if (!(isdigit(c) || c == '-' || c == ' ')) {
            return false;
        }
    }
    return phone.length() >= 7; // minimal sanity check
} */


// --------------------
// Setters with validation
// --------------------

void setApptId(int id) { appointment_id = id; }

void setApptDate(const std::string& d) {
    if (d.empty()) throw std::invalid_argument("Date cannot be empty.");
    appointment_date = d;
}

void setApptTime(const std::string& t) {
    if (t.empty()) throw std::invalid_argument("Time cannot be empty.");
    appointment_time = t;
}

void setApptDrId(const std::string& dr) {
    if (dr.empty()) throw std::invalid_argument("Invalid phone number.");
    appointment_doctor_id = dr;
}

void setApptInsId(const std::string& iid) {
    if (iid.empty()) throw std::invalid_argument("Invalid email address.");
    appointment_insurance_id = iid;
}

void setApptClaimId(const std::string& cid) {
    if (cid.empty()) throw std::invalid_argument("Location cannot be empty.");
    appointment_claim_id = cid;
}
void setApptReason(const std::string& r) {
    if (r.empty()) throw std::invalid_argument("Invalid phone number.");
    appointment_reason = r;
}

void setApptStatus(const std::string& stat) {
    if (stat.empty()) throw std::invalid_argument("Invalid email address.");
    appointment_status = stat;
}

void setApptEmgCont(const std::string& cid) {
    if (cid.empty()) throw std::invalid_argument("Location cannot be empty.");
    appointment_emergency_contact = cid;
}

// --------------------
// toString()
// --------------------

std::string toStringAppt()  {
    std::ostringstream oss;
    oss << "Appointment[ID=" << appointment_id
        << ", Date=" << appointment_date
        << ", Time=" << appointment_time
        << ", DoctorID=" << appointment_doctor_id
        << ", InsuranceID=" << appointment_insurance_id
        << ", ClaimID=" << appointment_claim_id
        << ", Reason=" << appointment_reason
        << ", Status=" << appointment_status
        << ", EmergencyContact=" << appointment_emergency_contact
        << "]";
    return oss.str();
}
