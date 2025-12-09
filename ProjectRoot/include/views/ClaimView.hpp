#ifndef CLAIM_VIEW_HPP
#define CLAIM_VIEW_HPP

#include <iostream>
#include <vector>
#include "models/Claim.hpp"

class ClaimView {
public:
    // Display a list of claims
    void displayList(const std::vector<Claim>& claims);

    // Display a single claim in detail
    void displayDetail(const Claim& claim);
};

#endif
