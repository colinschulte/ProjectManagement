#include "Doctor.hpp"

// --------------------
// Constructors
// --------------------

Doctor::Doctor()
    : doctor_id(0),
      name(""),
      specialty(""),
      phone(""),
      email(""),
      location("") {}

Doctor::Doctor(int docId,
               const std::string& docName,
               const std::string& docSpecialty,
               const std::string& docPhone,
               const std::string& docEmail,
               const std::string& docLocation)
    : doctor_id(docId),
      name(docName),
      specialty(docSpecialty),
      phone(docPhone),
      email(docEmail),
      location(docLocation) {}


// --------------------
// Getters
// --------------------

int Doctor::getId() const { return doctor_id; }
std::string Doctor::getName() const { return name; }
std::string Doctor::getSpecialty() const { return specialty; }
std::string Doctor::getPhone() const { return phone; }
std::string Doctor::getEmail() const { return email; }
std::string Doctor::getLocation() const { return location; }


// --------------------
// Basic validation (no regex, no extra includes)
// --------------------

bool Doctor::isValidEmail(const std::string& email) {
    return email.find('@') != std::string::npos &&
           email.find('.') != std::string::npos;
}

bool Doctor::isValidPhone(const std::string& phone) {
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

void Doctor::setId(int id) { doctor_id = id; }

void Doctor::setName(const std::string& n) {
    if (n.empty()) throw std::invalid_argument("Name cannot be empty.");
    name = n;
}

void Doctor::setSpecialty(const std::string& s) {
    if (s.empty()) throw std::invalid_argument("Specialty cannot be empty.");
    specialty = s;
}

void Doctor::setPhone(const std::string& p) {
    if (!isValidPhone(p)) throw std::invalid_argument("Invalid phone number.");
    phone = p;
}

void Doctor::setEmail(const std::string& e) {
    if (!isValidEmail(e)) throw std::invalid_argument("Invalid email address.");
    email = e;
}

void Doctor::setLocation(const std::string& loc) {
    if (loc.empty()) throw std::invalid_argument("Location cannot be empty.");
    location = loc;
}


// --------------------
// toString()
// --------------------

std::string Doctor::toString() const {
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
