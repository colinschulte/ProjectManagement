#ifndef DOCTOR_HPP
#define DOCTOR_HPP

#include <string>

class Doctor {
public:
int doctor_id;
std::string name;
std::string specialty;
std::string phone;
std::string email;
std::string location;

----------------------------------------------------------------------------------------------------------------------------------------------
Doctor() = default;
Doctor(int docId,
           const std::string& docName,
           const std::string& docSpecialty,
           const std::string& docPhone,
		   const std::string& docEmail,
           const std::string& docLocation)
         : doctor_id_id(docId),
   name(docName),
   specialty(docSpecialty),
   phone(docPhone),
   email(docEmail),
   location(docLocation) {}

};

#endif