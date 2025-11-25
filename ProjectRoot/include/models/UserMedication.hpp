#ifndef USERMEDICATION_HPP
#define USERMEDICATION_HPP

#include <string>

class UserMedication {
public:
int user_id;
int medication_id;
int doctor_id;
std::string start_date;
std::string end_date;

-------------------------------------------------------------------------------------------------------------------------------------------------------------
UserMedication() = default;
UserMedication(int userId,
               int medId,
               int docId,
               const std::string& startDate,
               const std::string& endDate)
    : user_id(userId),
      medication_id(medId),
      doctor_id(docId),
      start_date(startDate),
      end_date(endDate) {}

};

#endif