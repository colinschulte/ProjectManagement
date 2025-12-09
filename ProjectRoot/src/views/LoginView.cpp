#include "views/LoginView.hpp"

void LoginView::display() {
    std::cout << "======================" << std::endl;
    std::cout << "       LOGIN MENU      " << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "Enter Email: " << std::endl;
    std::cin >> emailValue;
    std::cout << "Enter Password: " << std::endl;
    std::cin >> passwordValue;
	
}