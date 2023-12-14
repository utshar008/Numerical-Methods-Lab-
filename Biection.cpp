#include <iostream>
#include <cmath>

using namespace std;

// Function for which root is to be found
double func(double x) {
    return x * x * x - 2 * x - 5;
}

// Bisection method implementation
void bisection(double a, double b, double tol, int max_iterations) {
    if (func(a) * func(b) >= 0) {
        cout << "Bisection method cannot be applied because f(a) * f(b) >= 0" << endl;
        return;
    }

    double c = a;
    for (int i = 1; i <= max_iterations; i++) {
        // Find mid point
        c = (a + b) / 2;

        // Check if mid point is root
        if (func(c) == 0.0) {
            cout << "Root found at iteration " << i << ": " << c << endl;
            return;
        }

        // Decide the side to repeat the steps
        if (func(c) * func(a) < 0) {
            b = c;
        } else {
            a = c;
        }

        // Display iteration and current approximation
        cout << "Iteration " << i << ": Root approximation = " << c << endl;

        // Check for tolerance
        if (fabs(b - a) < tol) {
            cout << "Root found within tolerance at iteration " << i << ": " << c << endl;
            return;
        }
    }

    cout << "Root approximation after " << max_iterations << " iterations: " << c << endl;
}

int main() {
    // Initial guesses and parameters
    double a = 1.0, b = 3.0;
    double tolerance = 0.01;
    int max_iter = 50;

    cout << "Bisection Method Iterations:" << endl;
    bisection(a, b, tolerance, max_iter);

    return 0;
}
