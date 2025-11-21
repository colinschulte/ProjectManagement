# TotalCare+
A C++ Console Health App

A simple console-based health management application in C++ using an MVC-inspired architecture.
This project manages users, caregivers, doctors, claims, medications, insurance, and appointments. It is designed as a starting point for extending into GUI apps or web APIs.

## Features

User Login: Secure login (demo plaintext passwords for simplicity).

Home Menu: Navigate between appointments, medications, and insurance.

Appointments: List upcoming appointments and make new appointments with available doctors

Medications: View all available medications.

Insurance: View insurance information linked to the user.

MVC Architecture: Separate models, views, and controllers for maintainability.

In-memory database: Mock storage for demo and testing purposes.

    Project Structure
    ProjectRoot/
    │
    ├── include/
    │   ├── models/          # Classes: User, Caregiver, Doctor, Claim, Insurance, Medication, UserMedication, Appointment
    │   ├── controllers/     # Controllers: UserLogin, ReadAppointment, ReadMedications, ReadInsurance, MakeAppointment
    │   ├── views/           # Views: Login, Home, Appointments, Medications, Insurance
    │   └── utils/           # Database helper (in-memory storage)
    │
    ├── src/                 # Implementation files for models, views, controllers, utils
    ├── main.cpp             # Application entry point

## Getting Started
Prerequisites

C++17 compatible compiler (GCC, Clang, MSVC)

Build and Run

Compile all .cpp files in src/ and include the headers:

    g++ -std=c++17 -Iinclude \
        src/main.cpp \
        src/models/*.cpp \
        src/controllers/*.cpp \
        src/views/*.cpp \
        src/utils/*.cpp \
        -o TotalCarePlus


Run the program:

    ./TotalCarePlus


On Windows, replace ./TotalCarePlus with TotalCarePlus.exe.

## Usage

1. Run the application.

2. Login with one of the sample users:

    | Username     | Password      |
    | :----------- | :------------ |
    | alice        | password      |
    | bob          | password      |

3. Navigate through the home menu to:

- View or create appointments

- View medications

- View insurance details

4. Logout or exit the application as needed.

**Sample Data**

Users: Alice Smith, Bob Johnson

Doctors: Dr. Alice Carter, Dr. Bob Stone

Insurances: Acme Health, BetterCare

Medications: Lisinopril, Metformin

Appointments: Preloaded demo appointments for each user

**Architecture**

Models: Represent domain objects (User, Appointment, Medication, etc.)

Controllers: Handle business logic and communication with the "Database"

Views: Console interface for user input/output

Database: In-memory storage (can be replaced with persistent storage)

**Next Steps / Extensions**

Add persistent storage (SQLite or JSON files)

Implement appointment editing/cancellation

Add hashed password authentication

Extend to GUI or REST API using C++ frameworks

Author

Maelynn Black, Monty Lawshé, Colin Schulte  — TotalCare+ project prototype