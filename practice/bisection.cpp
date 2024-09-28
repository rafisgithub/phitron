#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return pow(x, 3) - x - 1;
}

int main() {
    double x1, x2;
    cout << "Enter the endpoints (x1 and x2): ";
    cin >> x1 >> x2;

    double tolerance = 1e-6; // Tolerance for stopping condition
    int maxIter = 100; // Maximum number of iterations

    if (f(x1) * f(x2) >= 0) {
        cout << "The function must have different signs at x1 and x2." << endl;
        return 1; // Exit if the initial guesses are invalid
    }

    double x0; // Midpoint
    for (int t = 0; t < maxIter; ++t) {
        x0 = (x1 + x2) / 2; // Calculate the midpoint
        cout << "Iteration " << t + 1 << ": x1 = " << x1 << ", x2 = " << x2 
             << ", x0 = " << x0 << ", f(x0) = " << f(x0) << ", f(x1) = " << f(x1)<< ", f(x2) = " << f(x2) << endl;

        // Check if the midpoint is a root or within the tolerance
        if (fabs(f(x0)) < tolerance) {
            break; // Found root
        }

        // Update the interval based on the sign
        if (f(x1) * f(x0) < 0) {
            x2 = x0; // Root is in the left subinterval
        } else {
            x1 = x0; // Root is in the right subinterval
        }
    }

    cout << "Root found: " << x0 << endl; // Output the root
    return 0;
}
