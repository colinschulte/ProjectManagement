#include "../../include/controllers/UserLoginController.h"

UserLoginController::UserLoginController()
: loggedInUserId(0) {}

bool UserLoginController::authenticate(const std::string& emailValue,
const std::string& passwordValue) {
if (emailValue == "test@example.com" && passwordValue == "password123") {
loggedInUserId = 1;
return true;
}
return false;
}

int UserLoginController::getLoggedInUserId() const {
return loggedInUserId;
}