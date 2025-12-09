#include "models/User.hpp"

// Constructors
User::User()
    : user_id(0), user_insurance_id(0), user_cgiver_id(0), user_first_name(""),
      user_last_name(""), user_date_of_birth(""), user_phone(""), user_email(""),
      user_address("") {}

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
      user_insurance_id(insureId),
      user_cgiver_id(cgiverId),
      user_first_name(userFirstName),
      user_last_name(userLastName),
      user_date_of_birth(userDOB),
      user_phone(userPhone),
      user_email(userEmail),
      user_address(userAddress) {}

int user_id;
int user_insurance_id;
int user_cgiver_id;
std::string user_first_name;
std::string user_last_name;
std::string user_date_of_birth;
std::string user_phone;
std::string user_email;
std::string user_address;

// Getters
int getUserId() { return user_id; }
int getUserInsuranceId() { return user_insurance_id; }
int getUserCaregiverId() { return user_cgiver_id; }
std::string getUserFirstName() { return user_first_name; }
std::string getUserLastName() { return user_last_name; }
std::string getUserDOB() { return user_date_of_birth; }
std::string getUserPhone() { return user_phone; }
std::string getUserEmail() { return user_email; }
std::string getUserAddress() { return user_address; }

// Validation
bool isValidEmailUser(const std::string& e) {
    return e.find('@') != std::string::npos;
}

bool isValidPhoneUser(const std::string& p) {
    for (char c : p)
        if (!isdigit(c) && c != '-' && c != ' ') return false;
    return true;
}

// Setters
void setUserId(int id) { user_id = id; }
void setUserInsuranceId(int id) { user_insurance_id = id; }
void setUserCaregiverId(int id) { user_cgiver_id = id; }
void setUserFirstName(const std::string& n) { user_first_name = n; }
void setUserLastName(const std::string& n) { user_last_name = n; }
void setUserDOB(const std::string& dob) { user_date_of_birth = dob; }

void setUserPhone(const std::string& p) {
    if (!isValidPhoneUser(p)) return;
    user_phone = p;
}

void setUserEmail(const std::string& e) {
    if (!isValidEmailUser(e)) return;
    user_email = e;
}

void setUserAddress(const std::string& a) { user_address = a; }

// toString
std::string User::toStringUser() const {
    std::ostringstream oss;
    oss << "User[ID=" << user_id
        << ", InsuranceID=" << user_insurance_id
        << ", CaregiverID=" << user_cgiver_id
        << ", Name=" << user_first_name << " " << user_last_name
        << ", DOB=" << user_date_of_birth
        << ", Phone=" << user_phone
        << ", Email=" << user_email
        << ", Address=" << user_address
        << "]";
    return oss.str();
}