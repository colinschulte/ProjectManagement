#ifndef READ_APPOINTMENT_CONTROLLER_H
#define READ_APPOINTMENT_CONTROLLER_H

#include <vector>
#include <string>

struct AppointmentData {
int appointment_id;
std::string date;
std::string time;
std::string doctorName;
std::string reason;
std::string status;
};

class ReadAppointmentController {
public:
ReadAppointmentController();
std::vector<AppointmentData> loadAppointments(int userId);

};

#endif