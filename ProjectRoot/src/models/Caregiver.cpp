#include "models/Caregiver.hpp"

// --------------------
// Helper functions
// --------------------

bool containsOnlyPhoneChars(const std::string& s) {
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

bool basicEmailCheck(const std::string& s) {
    // Minimal check: contains '@' and '.'
    size_t at = s.find('@');
    size_t dot = s.find('.');
    return at != std::string::npos && dot != std::string::npos && at < dot;
}

// --------------------
// Constructors
// --------------------

/* Caregiver()
: cgiver_id(0),
	user_id(0),
	first_name(""),
	last_name(""),
	relationship(""),
	phone(""),
	email(""),
	address("") {} */
	
int cgiver_id;
int cgiver_user_id;
std::string cgiver_first_name;
std::string cgiver_last_name;
std::string cgiver_relationship;
std::string cgiver_phone;
std::string cgiver_email;
std::string cgiver_address;


Caregiver::Caregiver() = default;
Caregiver::Caregiver(int cgiverId,
		int userId,
		const std::string& cgiverFirstName,
		const std::string& cgiverLastName,
		const std::string& cgiverRelationship,
		const std::string& cgiverPhone,
		const std::string& cgiverEmail,
		const std::string& cgiverAddress)
		: cgiver_id(cgiverId),
cgiver_user_id(userId),
cgiver_first_name(cgiverFirstName),
cgiver_last_name(cgiverLastName),
cgiver_relationship(cgiverRelationship),
cgiver_phone(cgiverPhone),
cgiver_email(cgiverEmail),
cgiver_address(cgiverAddress) {}

//std::string toString() const;


/* Caregiver(int cgiverId,
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
	Caregiver::setId(cgiverId);
	setUserId(userId);
	setFirstName(cgiverFirstName);
	setLastName(cgiverLastName);
	setRelationship(cgiverRelationship);
	setPhone(cgiverPhone);
	setEmail(cgiverEmail);
	setAddress(cgiverAddress);
} */

// --------------------
// Getters
// --------------------

int Caregiver::getCgId() { return cgiver_id; }
int Caregiver::getCgUserId()  { return cgiver_user_id; }
std::string Caregiver::getCgFirstName()  { return cgiver_first_name; }
std::string Caregiver::getCgLastName()  { return cgiver_last_name; }
std::string Caregiver::getCgRelationship()  { return cgiver_relationship; }
std::string Caregiver::getCgPhone()  { return cgiver_phone; }
std::string Caregiver::getCgEmail()  { return cgiver_email; }
std::string Caregiver::getCgAddress()  { return cgiver_address; }

// --------------------
// Setters (with basic validation)
// --------------------

void setCgId(int id) {
	if (id < 0) return;
	cgiver_id = id;
}

void setCgUserId(int id) {
	if (id < 0) return;
	cgiver_user_id = id;
}

void setCgFirstName(const std::string& fn) {
	if (!fn.empty()) cgiver_first_name = fn;
}

void setCgLastName(const std::string& ln) {
	if (!ln.empty()) cgiver_last_name = ln;
}

void setCgRelationship(const std::string& rel) {
	if (!rel.empty()) cgiver_relationship = rel;
}

void setCgPhone(const std::string& ph) {
	if (ph.empty()) return;
	if (containsOnlyPhoneChars(ph)) cgiver_phone = ph;
}

void setCgEmail(const std::string& em) {
	if (basicEmailCheck(em)) cgiver_email = em;
}

void setCgAddress(const std::string& addr) {
	if (!addr.empty()) cgiver_address = addr;
}

// --------------------
// toString()
// --------------------

std::string Caregiver::toStringCg() const {
	std::ostringstream oss;
	oss << "Caregiver[ID=" << cgiver_id
		<< ", UserID=" << cgiver_user_id
		<< ", Name=" << cgiver_first_name << " " << cgiver_last_name
		<< ", Relationship=" << cgiver_relationship
		<< ", Phone=" << cgiver_phone
		<< ", Email=" << cgiver_email
		<< ", Address=" << cgiver_address
		<< "]";
	return oss.str();
};
