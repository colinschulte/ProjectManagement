#ifndef MEDICATIONS_VIEW_H
#define MEDICATIONS_VIEW_H

#include <iostream>
#include <vector>
#include "models/Medication.hpp"
#include "models/UserMedication.hpp"

class MedicationsView {
public:
    void display(const std::vector<UserMedication>& userMeds,
                 const std::vector<Medication>& allMeds);
};

#endif
