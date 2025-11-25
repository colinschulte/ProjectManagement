#ifndef APPOINTMENTS_VIEW_H
#define APPOINTMENTS_VIEW_H

#include <iostream>
#include <vector>
#include "Appointment.hpp"

class AppointmentsView {
public:
    void display(const std::vector<Appointment>& appointments);
};

#endif
