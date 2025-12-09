#include "views/ClaimView.hpp"

void ClaimView::displayList(const std::vector<Claim>& claims) {
    std::cout << "=============================\n";
    std::cout << "          CLAIMS             \n";
    std::cout << "=============================\n";

    if (claims.empty()) {
        std::cout << "No claims found.\n";
        return;
    }

    for (size_t i = 0; i < claims.size(); ++i) {
        const Claim& c = claims[i];
        std::cout << i + 1 << ". Claim ID: " << c.claimId
                  << " | Status: " << claimStatusToString(c.status)
                  << " | Amount Charged: $" << c.amountCharged.str() << "\n";
    }

    std::cout << "=============================\n";
}

void ClaimView::displayDetail(const Claim& claim) {
    std::cout << "=============================\n";
    std::cout << "       CLAIM DETAILS         \n";
    std::cout << "=============================\n";
    std::cout << claim.toStringClaim();
    std::cout << "=============================\n";
}
