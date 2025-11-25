#ifndef CAREGIVER_HPP
#define CAREGIVER_HPP

#include <string>

class Caregiver {
public:
int cgiver_id;
int user_id;
std::string first_name;
std::string last_name;
std::string relationship;
std::string phone;
std::string email;
std::string address;

----------------------------------------------------------------------------------------------------------------------------------------------
Caregiver() = default;
Caregiver(int cgiverId,
		   int userId,
           const std::string& cgiverFirstName,
		   const std::string& cgiverLastName,
           const std::string& cgiverRelationship,
           const std::string& cgiverPhone,
		   const std::string& cgiverEmail,
           const std::string& cgiverAddress)
         : cgiver_id(cgiverId),
   user_id(userId),
   first_name(cgiverFirstName),
   last_name(cgiverLastName),
   relationship(cgiverRelationship),
   phone(cgiverPhone),
   email(cgiverEmail),
   address(cgiverAddress) {}

};

#endif