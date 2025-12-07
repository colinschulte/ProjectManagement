#ifndef USER_LOGIN_CONTROLLER_H
#define USER_LOGIN_CONTROLLER_H

#include <string>

class UserLoginController {
public:
UserLoginController();
bool authenticate(const std::string& emailValue, const std::string& passwordValue); int getLoggedInUserId() const;

private:
int loggedInUserId;
};

#endif