#ifndef CAREGIVER_HPP
#define CAREGIVER_HPP

#include <string>
#include <sstream>

class Caregiver {
public:
int cgiver_id;
int cgiver_user_id;
std::string cgiver_first_name;
std::string cgiver_last_name;
std::string cgiver_relationship;
std::string cgiver_phone;
std::string cgiver_email;
std::string cgiver_address;


Caregiver();
Caregiver(int cgiverId, 
  int cgiveruserId,
  const std::string& cgiverFirstName,
  const std::string& cgiverLastName,
  const std::string& cgiverRelationship,
  const std::string& cgiverPhone,
	const std::string& cgiverEmail,
  const std::string& cgiverAddress
  );

  std::string toStringCg() const;

  int getCgId();
	int getCgUserId();
	std::string getCgFirstName();
	std::string getCgLastName();
	std::string getCgRelationship();
	std::string getCgPhone();
	std::string getCgEmail();
	std::string getCgAddress();
};

#endif