#include "Caregiver.hpp"

// --------------------
// Helper functions
// --------------------

bool Caregiver::containsOnlyPhoneChars(const std::string& s) {
    for (char c : s) {
        if (!(c >= '0' && c <= '9') &&
            c != ' ' &&
            c != '-' &&
            c != '(' &&
            c != ')') {
            return false;
        }
    }
    return true;
}

bool Caregiver::basicEmailCheck(const std::string& s) {
    // Minimal check: contains '@' and '.'
    size_t at = s.find('@');
    size_t dot = s.find('.');
    return at != std::string::npos && dot != std::string::npos && at < dot;
}

// --------------------
// Constructors
// --------------------

Caregiver::Caregiver()
    : cgiver_id(0),
      user_id(0),
      first_name(""),
      last_name(""),
      relationship(""),
      phone(""),
      email(""),
      address("") {}

Caregiver::Caregiver(int cgiverId,
                     int userId,
                     const std::string& cgiverFirstName,
                     const std::string& cgiverLastName,
                     const std::string& cgiverRelationship,
                     const std::string& cgiverPhone,
                     const std::string& cgiverEmail,
                     const std::string& cgiverAddress)
    : cgiver_id(0),
      user_id(0),
      first_name(""),
      last_name(""),
      relationship(""),
      phone(""),
      email(""),
      address("")
{
    setId(cgiverId);
    setUserId(userId);
    setFirstName(cgiverFirstName);
    setLastName(cgiverLastName);
    setRelationship(cgiverRelationship);
    setPhone(cgiverPhone);
    setEmail(cgiverEmail);
    setAddress(cgiverAddress);
}

// --------------------
// Getters
// --------------------

int Caregiver::getId() const { return cgiver_id; }
int Caregiver::getUserId() const { return user_id; }
std::string Caregiver::getFirstName() const { return first_name; }
std::string Caregiver::getLastName() const { return last_name; }
std::string Caregiver::getRelationship() const { return relationship; }
std::string Caregiver::getPhone() const { return phone; }
std::string Caregiver::getEmail() const { return email; }
std::string Caregiver::getAddress() const { return address; }

// --------------------
// Setters (with basic validation)
// --------------------

void Caregiver::setId(int id) {
    if (id < 0) return;
    cgiver_id = id;
}

void Caregiver::setUserId(int id) {
    if (id < 0) return;
    user_id = id;
}

void Caregiver::setFirstName(const std::string& fn) {
    if (!fn.empty()) first_name = fn;
}

void Caregiver::setLastName(const std::string& ln) {
    if (!ln.empty()) last_name = ln;
}

void Caregiver::setRelationship(const std::string& rel) {
    if (!rel.empty()) relationship = rel;
}

void Caregiver::setPhone(const std::string& ph) {
    if (ph.empty()) return;
    if (containsOnlyPhoneChars(ph)) phone = ph;
}

void Caregiver::setEmail(const std::string& em) {
    if (basicEmailCheck(em)) email = em;
}

void Caregiver::setAddress(const std::string& addr) {
    if (!addr.empty()) address = addr;
}

// --------------------
// toString()
// --------------------

std::string Caregiver::toString() const {
    std::ostringstream oss;
    oss << "Caregiver[ID=" << cgiver_id
        << ", UserID=" << user_id
        << ", Name=" << first_name << " " << last_name
        << ", Relationship=" << relationship
        << ", Phone=" << phone
        << ", Email=" << email
        << ", Address=" << address
        << "]";
    return oss.str();
}
