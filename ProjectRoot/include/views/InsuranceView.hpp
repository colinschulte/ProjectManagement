#ifndef INSURANCE_VIEW_HPP
#define INSURANCE_VIEW_HPP

#include <iostream>
#include <vector>
#include "models/Insurance.hpp"

class InsuranceView {
public:
    void display(const std::vector<Insurance>& policies);
};

#endif
