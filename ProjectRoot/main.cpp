#include <iostream>
#include "claim.h"
#include "insurance.h"   // Optional — only if you're using Insurance too

using namespace std;

int main() {

    cout << "=== Creating Claim ===" << endl;

    // Create a sample claim
    Claim claim(
        "CLM-001",           // claimId
        "POL-12345",         // policyNumber
        "Alice Johnson",     // claimantName
        "BlueCross Hospital",// providerName
        "2025-02-15",        // dateOfService
        Money(1200)          // amountCharged
    );

    // Validate
    string problem;
    if (!claim.validate(problem)) {
        cout << "Claim validation failed: " << problem << endl;
        return 1;
    }

    cout << "Initial Claim: " << claim.toString() << endl;
    cout << endl;

    // Approve claim
    cout << "=== Approving Claim ===" << endl;
    claim.approve(Money(900), "Allowed amount set after review");
    cout << "After Approval: " << claim.toString() << endl;
    cout << endl;

    // Pay claim
    cout << "=== Paying Claim ===" << endl;
    claim.pay(Money(600));
    cout << "After Payment: " << claim.toString() << endl;
    cout << endl;

    // Reopen claim
    cout << "=== Reopening Claim ===" << endl;
    claim.reopen("Additional documentation required");
    cout << "After Reopen: " << claim.toString() << endl;
    cout << endl;

    return 0;
}
