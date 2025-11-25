#include "AppointmentsView.h"

void AppointmentsView::display(const std::vector<Appointment>& appointments)
{
    std::cout << "=========================" << std::endl;
    std::cout << "      APPOINTMENTS       " << std::endl;
    std::cout << "=========================" << std::endl;

    if (appointments.empty()) {
        std::cout << "No appointments found." << std::endl;
    } else {
        for (size_t i = 0; i < appointments.size(); i++) {
            const Appointment& appt = appointments[i];

            std::cout << "\nAppointment " << (i + 1) << ":" << std::endl;
            std::cout << "-------------------------" << std::endl;
            std::cout << "Appointment ID:      " << appt.appointment_id << std::endl;
            std::cout << "Date:                " << appt.appointment_date << std::endl;
            std::cout << "Time:                " << appt.appointment_time << std::endl;
            std::cout << "Doctor ID:           " << appt.doctor_id << std::endl;
            std::cout << "Insurance ID:        " << appt.insurance_id << std::endl;
            std::cout << "Claim ID:            " << appt.claim_id << std::endl;
            std::cout << "Reason:              " << appt.reason << std::endl;
            std::cout << "Status:              " << appt.status << std::endl;
            std::cout << "Emergency Contact:   " << appt.emergency_contact << std::endl;
        }
    }

    std::cout << "\nOptions:" << std::endl;
    std::cout << "1. Make Appointment" << std::endl;
    std::cout << "2. Back to Home" << std::endl;
    std::cout << "Select an option: ";
}