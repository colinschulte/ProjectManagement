#ifndef DOCTOR_HPP
#define DOCTOR_HPP

#include <string>
#include <sstream>

class Doctor {
public:
int doctor_id;
std::string doctor_name;
std::string doctor_specialty;
std::string doctor_phone;
std::string doctor_email;
std::string doctor_location;


Doctor();
Doctor(int docId,
  const std::string& docName,
  const std::string& docSpecialty,
  const std::string& docPhone,
  const std::string& docEmail,
  const std::string& docLocation);

  int getDocId();
  std::string getDocName();
  std::string getDocSpecialty();
  std::string getDocPhone();
  std::string getDocEmail();
  std::string getDocLocation();
  std::string toStringDoc() const;
};

#endif