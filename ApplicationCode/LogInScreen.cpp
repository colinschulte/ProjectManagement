#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Struct to store username-password pairs
struct User {
    string username;
    string password;
};

// In-memory list of users
vector<User> users;

// Function to find a user by username
int findUserIndex(const string& username) {
    for (int i = 0; i < users.size(); i++) {
        if (users[i].username == username) {
            return i;
        }
    }
    return -1;
}

// -------------------------------------------------
// USER MENU FUNCTION (after successful login)
// -------------------------------------------------
void userMenu(const string& username) {
    int choice;

    while (true) {
        cout << "\n===== TotalCare+ User Menu =====\n";
        cout << "Welcome, " << username << "!\n";
        cout << "1. View Profile\n";
        cout << "2. Settings\n";
        cout << "3. Log Out\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\n[Profile Page Placeholder]\n";
            break;
        case 2:
            cout << "\n[Settings Page Placeholder]\n";
            break;
        case 3:
            cout << "Logging out...\n";
            return;  // Return to main menu
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
}

// -------------------------------------------------
// REGISTER FUNCTION
// -------------------------------------------------
void registerAccount() {
    string username, password;

    cout << "\n--- TotalCare+ Account Registration ---\n";
    cout << "Create a username: ";
    cin >> username;

    if (findUserIndex(username) != -1) {
        cout << "Error: Username already exists! Try another.\n";
        return;
    }

    cout << "Create a password: ";
    cin >> password;

    users.push_back({ username, password });

    cout << "Registration successful! You can now log in.\n";
}

// -------------------------------------------------
// LOGIN FUNCTION
// -------------------------------------------------
void login() {
    string username, password;

    cout << "\n--- TotalCare+ Login ---\n";
    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    int index = findUserIndex(username);

    if (index != -1 && users[index].password == password) {
        cout << "Login successful! Welcome to TotalCare+, " << username << "!\n";
        userMenu(username);  // Redirect to user menu
    }
    else {
        cout << "Invalid username or password.\n";
    }
}

// -------------------------------------------------
// MAIN MENU
// -------------------------------------------------
int main() {
    int choice;

    while (true) {
        cout << "\n===== TotalCare+ Mobile App =====\n";
        cout << "1. Login\n";
        cout << "2. Register\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            login();
            break;
        case 2:
            registerAccount();
            break;
        case 3:
            cout << "Exiting TotalCare+. Goodbye!\n";
            return 0;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
}
