#ifndef INSURANCE_VIEW_H
#define INSURANCE_VIEW_H

#include <iostream>
#include <vector>
#include "Insurance.hpp"

class InsuranceView {
public:
    void display(const std::vector<Insurance>& policies);
};

#endif
