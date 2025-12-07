#ifndef CAREGIVER_HPP
#define CAREGIVER_HPP

#include <string>
#include <sstream>

class Caregiver {
private:
    int cgiver_id;
    int user_id;
    std::string first_name;
    std::string last_name;
    std::string relationship;
    std::string phone;
    std::string email;
    std::string address;

    // Helpers that do NOT require extra headers
    static bool containsOnlyPhoneChars(const std::string& s);
    static bool basicEmailCheck(const std::string& s);

public:
    // Constructors
    Caregiver();
    Caregiver(int cgiverId,
              int userId,
              const std::string& cgiverFirstName,
              const std::string& cgiverLastName,
              const std::string& cgiverRelationship,
              const std::string& cgiverPhone,
              const std::string& cgiverEmail,
              const std::string& cgiverAddress);

    // Getters
    int getId() const;
    int getUserId() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getRelationship() const;
    std::string getPhone() const;
    std::string getEmail() const;
    std::string getAddress() const;

    // Setters with lightweight validation
    void setId(int id);
    void setUserId(int id);
    void setFirstName(const std::string& fn);
    void setLastName(const std::string& ln);
    void setRelationship(const std::string& rel);
    void setPhone(const std::string& ph);
    void setEmail(const std::string& em);
    void setAddress(const std::string& addr);

    // Convert object to readable string
    std::string toString() const;
};

#endif
