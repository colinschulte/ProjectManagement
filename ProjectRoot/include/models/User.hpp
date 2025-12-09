#ifndef USER_HPP
#define USER_HPP

#include <string>
#include <sstream>


class User {
public:
int user_id;
int user_insurance_id;
int user_cgiver_id;
std::string user_first_name;
std::string user_last_name;
std::string user_date_of_birth;
std::string user_phone;
std::string user_email;
std::string user_address;

User();
User(int userId,
		   int insureId,
		   int cgiverId,
           const std::string& userFirstName,
		   const std::string& userLastName,
           const std::string& userDOB,
           const std::string& userPhone,
		   const std::string& userEmail,
           const std::string& userAddress);
   
   std::string toStringUser() const;
};

#endif
