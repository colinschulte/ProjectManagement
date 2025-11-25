#ifndef MEDICATIONS_VIEW_H
#define MEDICATIONS_VIEW_H

#include <iostream>
#include <vector>
#include "Medication.hpp"
#include "UserMedication.hpp"

class MedicationsView {
public:
    void display(const std::vector<UserMedication>& userMeds,
                 const std::vector<Medication>& allMeds);
};

#endif
