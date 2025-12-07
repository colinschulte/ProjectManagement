#include "User.hpp"

// Constructors
User::User()
    : user_id(0), insurance_id(0), cgiver_id(0), first_name(""),
      last_name(""), date_of_birth(""), phone(""), email(""),
      address("") {}

User::User(int userId,
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

// Getters
int User::getId() const { return user_id; }
int User::getInsuranceId() const { return insurance_id; }
int User::getCaregiverId() const { return cgiver_id; }
std::string User::getFirstName() const { return first_name; }
std::string User::getLastName() const { return last_name; }
std::string User::getDOB() const { return date_of_birth; }
std::string User::getPhone() const { return phone; }
std::string User::getEmail() const { return email; }
std::string User::getAddress() const { return address; }

// Validation
bool User::isValidEmail(const std::string& e) {
    return e.find('@') != std::string::npos;
}

bool User::isValidPhone(const std::string& p) {
    for (char c : p)
        if (!isdigit(c) && c != '-' && c != ' ') return false;
    return true;
}

// Setters
void User::setId(int id) { user_id = id; }
void User::setInsuranceId(int id) { insurance_id = id; }
void User::setCaregiverId(int id) { cgiver_id = id; }
void User::setFirstName(const std::string& n) { first_name = n; }
void User::setLastName(const std::string& n) { last_name = n; }
void User::setDOB(const std::string& dob) { date_of_birth = dob; }

void User::setPhone(const std::string& p) {
    if (!isValidPhone(p)) return;
    phone = p;
}

void User::setEmail(const std::string& e) {
    if (!isValidEmail(e)) return;
    email = e;
}

void User::setAddress(const std::string& a) { address = a; }

// toString
std::string User::toString() const {
    std::ostringstream oss;
    oss << "User[ID=" << user_id
        << ", InsuranceID=" << insurance_id
        << ", CaregiverID=" << cgiver_id
        << ", Name=" << first_name << " " << last_name
        << ", DOB=" << date_of_birth
        << ", Phone=" << phone
        << ", Email=" << email
        << ", Address=" << address
        << "]";
    return oss.str();
}