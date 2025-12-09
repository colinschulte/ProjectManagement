#ifndef APPOINTMENT_HPP
#define APPOINTMENT_HPP

#include <string>
#include <sstream>

class Appointment {
    public:
    int appointment_id;
    std::string appointment_date;
    std::string appointment_time;
    std::string appointment_doctor_id;
    std::string appointment_insurance_id;
    std::string appointment_claim_id;
    std::string appointment_reason;
    std::string appointment_status;
    std::string appointment_emergency_contact;

    
    Appointment();
    Appointment(int apptId,
        const std::string& apptDate,
        const std::string& apptTime,
        const std::string& apptDocId,
        const std::string& apptInsId,
        const std::string& apptClaimId,
        const std::string& apptReason,
        const std::string& apptStatus,
        const std::string& apptEmerCont);

    std::string toStringAppt() const;

    int getApptId();
    std::string getApptDate();
    std::string getApptTime();
    std::string getApptDrId();
    std::string getApptInsId();
    std::string getApptClaimId();
    std::string getApptReason();
    std::string getApptStatus();
    std::string getApptEmgCont();

/*     bool isValidEmail(const std::string& email);
    bool isValidPhone(const std::string& phone); */
};

#endif