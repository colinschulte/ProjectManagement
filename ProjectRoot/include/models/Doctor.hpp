#ifndef DOCTOR_HPP
#define DOCTOR_HPP

#include <string>
#include <sstream>

class Doctor {
private:
    int doctor_id;
    std::string name;
    std::string specialty;
    std::string phone;
    std::string email;
    std::string location;

public:
    // Constructors
    Doctor();
    Doctor(int docId,
           const std::string& docName,
           const std::string& docSpecialty,
           const std::string& docPhone,
           const std::string& docEmail,
           const std::string& docLocation);

    // Getters
    int getId() const;
    std::string getName() const;
    std::string getSpecialty() const;
    std::string getPhone() const;
    std::string getEmail() const;
    std::string getLocation() const;

    // Setters (with basic validation)
    void setId(int id);
    void setName(const std::string& n);
    void setSpecialty(const std::string& s);
    void setPhone(const std::string& p);
    void setEmail(const std::string& e);
    void setLocation(const std::string& loc);

    // Basic validation helpers
    static bool isValidEmail(const std::string& email);
    static bool isValidPhone(const std::string& phone);

    // String representation
    std::string toString() const;
};

#endif