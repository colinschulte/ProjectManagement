#include "../../include/controllers/ReadAppointmentController.h"

ReadAppointmentController::ReadAppointmentController() {}

std::vector<AppointmentData> ReadAppointmentController::loadAppointments(int userId) {
std::vector<AppointmentData> result;
AppointmentData sample; sample.appointment_id = 10; sample.date = "2025-01-12"; sample.time = "09:30"; sample.doctorName = "Dr. Smith"; sample.reason = "Routine check"; sample.status = "Scheduled"; result.push_back(sample); return result;

}