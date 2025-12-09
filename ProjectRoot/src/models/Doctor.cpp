#include "models/Doctor.hpp"

// --------------------
// Constructors
// --------------------
int doctor_id;
std::string name;
std::string specialty;
std::string phone;
std::string email;
std::string location;

Doctor::Doctor()
    : doctor_id(0),
      doctor_name(""),
      doctor_specialty(""),
      doctor_phone(""),
      doctor_email(""),
      doctor_location("") {}

Doctor::Doctor(int docId,
               const std::string& docName,
               const std::string& docSpecialty,
               const std::string& docPhone,
               const std::string& docEmail,
               const std::string& docLocation)
    : doctor_id(docId),
      doctor_name(docName),
      doctor_specialty(docSpecialty),
      doctor_phone(docPhone),
      doctor_email(docEmail),
      doctor_location(docLocation) {}


// --------------------
// Getters
// --------------------

int Doctor::getDocId()  { return doctor_id; }
std::string Doctor::getDocName()  { return name; }
std::string Doctor::getDocSpecialty()  { return specialty; }
std::string Doctor::getDocPhone()  { return phone; }
std::string Doctor::getDocEmail()  { return email; }
std::string Doctor::getDocLocation()  { return location; }


// --------------------
// Basic validation (no regex, no extra includes)
// --------------------

bool isValidEmail(const std::string& email) {
    return email.find('@') != std::string::npos &&
           email.find('.') != std::string::npos;
}

bool isValidPhone(const std::string& phone) {
    for (char c : phone) {
        if (!(isdigit(c) || c == '-' || c == ' ')) {
            return false;
        }
    }
    return phone.length() >= 7; // minimal sanity check
}


// --------------------
// Setters with validation
// --------------------

void setDocId(int id) { doctor_id = id; }

void setDocName(const std::string& n) {
    if (n.empty()) throw std::invalid_argument("Name cannot be empty.");
    name = n;
}

void setDocSpecialty(const std::string& s) {
    if (s.empty()) throw std::invalid_argument("Specialty cannot be empty.");
    specialty = s;
}

void setDocPhone(const std::string& p) {
    if (!isValidPhone(p)) throw std::invalid_argument("Invalid phone number.");
    phone = p;
}

void setDocEmail(const std::string& e) {
    if (!isValidEmail(e)) throw std::invalid_argument("Invalid email address.");
    email = e;
}

void setDocLocation(const std::string& loc) {
    if (loc.empty()) throw std::invalid_argument("Location cannot be empty.");
    location = loc;
}


// --------------------
// toString()
// --------------------

std::string Doctor::toStringDoc() const {
    std::ostringstream oss;
    oss << "Doctor[ID=" << doctor_id
        << ", Name=" << name
        << ", Specialty=" << specialty
        << ", Phone=" << phone
        << ", Email=" << email
        << ", Location=" << location
        << "]";
    return oss.str();
}
