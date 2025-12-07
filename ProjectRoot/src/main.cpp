#include <iostream>
#include "Caregiver.hpp"
#include "Doctor.hpp"
#include "Medication.hpp"
#include "User.hpp"
#include "UserMedication.hpp"
#include "Claim.hpp"
#include "Insurance.hpp"

void printMenu() {
    std::cout << "\n--- Main Menu ---\n"
              << "1. Create/Edit Caregiver\n"
              << "2. Create/Edit Doctor\n"
              << "3. Create/Edit Medication\n"
              << "4. Create/Edit User\n"
              << "5. Create/Edit UserMedication\n"
              << "6. Create/Edit Claim\n"
              << "7. Create/Edit Insurance\n"
              << "8. View All Data\n"
              << "9. Exit\n"
              << "Select an option: ";
}

int main() {
    Caregiver cg;
    Doctor doc;
    Medication med;
    User user;
    UserMedication um;
    Claim claim;
    Insurance ins;

    bool running = true;
    int choice;

    while (running) {
        printMenu();
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1: { // Caregiver
                std::cout << "\nEnter Caregiver info:\n";
                int cgId, cgUserId;
                std::string first, last, rel, phone, email, address;
                std::cout << "ID: "; std::cin >> cgId; std::cin.ignore();
                std::cout << "User ID: "; std::cin >> cgUserId; std::cin.ignore();
                std::cout << "First Name: "; std::getline(std::cin, first);
                std::cout << "Last Name: "; std::getline(std::cin, last);
                std::cout << "Relationship: "; std::getline(std::cin, rel);
                std::cout << "Phone: "; std::getline(std::cin, phone);
                std::cout << "Email: "; std::getline(std::cin, email);
                std::cout << "Address: "; std::getline(std::cin, address);
                cg = Caregiver(cgId, cgUserId, first, last, rel, phone, email, address);
                break;
            }

            case 2: { // Doctor
                std::cout << "\nEnter Doctor info:\n";
                int id; std::string name, spec, phone, email, loc;
                std::cout << "ID: "; std::cin >> id; std::cin.ignore();
                std::cout << "Name: "; std::getline(std::cin, name);
                std::cout << "Specialty: "; std::getline(std::cin, spec);
                std::cout << "Phone: "; std::getline(std::cin, phone);
                std::cout << "Email: "; std::getline(std::cin, email);
                std::cout << "Location: "; std::getline(std::cin, loc);
                doc = Doctor(id, name, spec, phone, email, loc);
                break;
            }

            case 3: { // Medication
                std::cout << "\nEnter Medication info:\n";
                int id, insId, refills;
                std::string name, dosage, freq, refillDate;
                std::cout << "ID: "; std::cin >> id; std::cin.ignore();
                std::cout << "Insurance ID: "; std::cin >> insId; std::cin.ignore();
                std::cout << "Name: "; std::getline(std::cin, name);
                std::cout << "Dosage: "; std::getline(std::cin, dosage);
                std::cout << "Frequency: "; std::getline(std::cin, freq);
                std::cout << "Number of Refills: "; std::cin >> refills; std::cin.ignore();
                std::cout << "Refill Date: "; std::getline(std::cin, refillDate);
                med = Medication(id, insId, name, dosage, freq, refills, refillDate);
                break;
            }

            case 4: { // User
                std::cout << "\nEnter User info:\n";
                int id, insId, cgId;
                std::string first, last, dob, phone, email, addr;
                std::cout << "ID: "; std::cin >> id; std::cin.ignore();
                std::cout << "Insurance ID: "; std::cin >> insId; std::cin.ignore();
                std::cout << "Caregiver ID: "; std::cin >> cgId; std::cin.ignore();
                std::cout << "First Name: "; std::getline(std::cin, first);
                std::cout << "Last Name: "; std::getline(std::cin, last);
                std::cout << "Date of Birth (YYYY-MM-DD): "; std::getline(std::cin, dob);
                std::cout << "Phone: "; std::getline(std::cin, phone);
                std::cout << "Email: "; std::getline(std::cin, email);
                std::cout << "Address: "; std::getline(std::cin, addr);
                user = User(id, insId, cgId, first, last, dob, phone, email, addr);
                break;
            }

            case 5: { // UserMedication
                std::cout << "\nEnter UserMedication info:\n";
                int uid, mid, did;
                std::string start, end;
                std::cout << "User ID: "; std::cin >> uid; std::cin.ignore();
                std::cout << "Medication ID: "; std::cin >> mid; std::cin.ignore();
                std::cout << "Doctor ID: "; std::cin >> did; std::cin.ignore();
                std::cout << "Start Date: "; std::getline(std::cin, start);
                std::cout << "End Date: "; std::getline(std::cin, end);
                um = UserMedication(uid, mid, did, start, end);
                break;
            }

            case 6: { // Claim
                std::cout << "\nEnter Claim info:\n";
                std::string id, policy, claimant, provider, dos;
                double charged;
                std::cout << "Claim ID: "; std::getline(std::cin, id);
                std::cout << "Policy Number: "; std::getline(std::cin, policy);
                std::cout << "Claimant Name: "; std::getline(std::cin, claimant);
                std::cout << "Provider Name: "; std::getline(std::cin, provider);
                std::cout << "Date of Service (YYYY-MM-DD): "; std::getline(std::cin, dos);
                std::cout << "Amount Charged: "; std::cin >> charged; std::cin.ignore();
                claim = Claim(id, policy, claimant, provider, dos, charged);

                std::string problem;
                if (!claim.validate(problem))
                    std::cout << "Claim validation failed: " << problem << "\n";
                else
                    std::cout << "Claim validation passed.\n";
                break;
            }

            case 7: { // Insurance
                std::cout << "\nEnter Insurance info:\n";
                int id; std::string prov, pol, cov, start, end;
                std::cout << "Insurance ID: "; std::cin >> id; std::cin.ignore();
                std::cout << "Provider Name: "; std::getline(std::cin, prov);
                std::cout << "Policy Number: "; std::getline(std::cin, pol);
                std::cout << "Coverage Details: "; std::getline(std::cin, cov);
                std::cout << "Start Date: "; std::getline(std::cin, start);
                std::cout << "End Date: "; std::getline(std::cin, end);
                ins = Insurance(id, prov, pol, cov, start, end);
                break;
            }

            case 8: { // View all
                std::cout << "\n--- Caregiver ---\n" << cg.toString() << "\n";
                std::cout << "\n--- Doctor ---\n" << doc.toString() << "\n";
                std::cout << "\n--- Medication ---\n" << med.toString() << "\n";
                std::cout << "\n--- User ---\n" << user.toString() << "\n";
                std::cout << "\n--- UserMedication ---\n" << um.toString() << "\n";
                std::cout << "\n--- Claim ---\n" << claim.toString() << "\n";
                std::cout << "\n--- Insurance ---\n" << ins.toString() << "\n";
                break;
            }

            case 9:
                running = false;
                break;

            default:
                std::cout << "Invalid option. Try again.\n";
        }
    }

    std::cout << "Exiting program.\n";
    return 0;
}