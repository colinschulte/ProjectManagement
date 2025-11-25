#ifndef USER_HPP
#define USER_HPP

#include <string>

class User {
public:
int user_id;
int insurance_id;
int cgiver_id;
std::string first_name;
std::string last_name;
std::string date_of_birth;
std::string phone;
std::string email;
std::string address;

----------------------------------------------------------------------------------------------------------------------------------------------
User() = default;
User(int userId,
		   int insureId,
		   int cgiverId,
           const std::string& userFirstName,
		   const std::string& userLastName,
           const std::string& userDOB,
           const std::string& userPhone,
		   const std::string& userEmail,
           const std::string& userAddress)
         : user_id(userId),
   insurance_id(insureId),
   cgiver_id(cgiverId),
   first_name(userFirstName),
   last_name(userLastName),
   date_of_birth(userDOB),
   phone(userPhone),
   email(userEmail),
   address(userAddress) {}

};

#endif