#ifndef USER_HPP
#define USER_HPP

#include <string>
#include <sstream>

class User {
private:
    int user_id;
    int insurance_id;
    int cgiver_id;
    std::string first_name;
    std::string last_name;
    std::string date_of_birth;
    std::string phone;
    std::string email;
    std::string address;

public:
    User();
    User(int userId,
         int insureId,
         int cgiverId,
         const std::string& userFirstName,
         const std::string& userLastName,
         const std::string& userDOB,
         const std::string& userPhone,
         const std::string& userEmail,
         const std::string& userAddress);

    // Getters
    int getId() const;
    int getInsuranceId() const;
    int getCaregiverId() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getDOB() const;
    std::string getPhone() const;
    std::string getEmail() const;
    std::string getAddress() const;

    // Setters
    void setId(int id);
    void setInsuranceId(int id);
    void setCaregiverId(int id);
    void setFirstName(const std::string& n);
    void setLastName(const std::string& n);
    void setDOB(const std::string& dob);
    void setPhone(const std::string& p);
    void setEmail(const std::string& e);
    void setAddress(const std::string& a);

    // Simple validation
    static bool isValidEmail(const std::string& e);
    static bool isValidPhone(const std::string& p);

    std::string toString() const;
};

#endif
