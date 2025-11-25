#ifndef APPOINTMENT_HPP
#define APPOINTMENT_HPP

#include <string>

class Appointment {
public:
int appointment_id;
int user_id;
int doctor_id;
int insurance_id;
int claim_id;
std::string appointment_date;
std::string appointment_time;
std::string reason;
std::string status;
std::string emergency_contact;

Appointment() = default;
Appointment(int apptId,
		   int userId,
		   int docId,
		   int insureId,
		   int claimId,
           const std::string& apptDate,
           const std::string& apptTime,
           const std::string& apptReason,
		   const std::string& apptStatus,
           const std::string& apptContact)
         : appointment_id(apptId),
   user_id(userId),
   doctor_id(docId),
   insurance_id(insureId),
   claim_id(claimId),
   appointment_date(apptDate),
   appointment_time(apptTime),
   reason(apptReason),
   status(apptStatus),
   emergency_contact(apptContact) {}

};

#endif