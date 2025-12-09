#ifndef USERMEDICATION_HPP
#define USERMEDICATION_HPP

#include <string>
#include <sstream>



class UserMedication {
public:
int um_user_id;
int um_medication_id;
int um_doctor_id;
std::string um_start_date;
std::string um_end_date;


UserMedication();
UserMedication(int um_userId,
               int um_medId,
               int um_docId,
               const std::string& um_startDate,
               const std::string& um_endDate);
	  
	  std::string toStringUserMeds() const;
};

#endif