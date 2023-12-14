#include <iostream>
#include <cmath>

using namespace std;

// Function for which root is to be found
double func(double x) {
    return x * x * x - 2 * x - 5;
}

// Derivative of the function
double func_derivative(double x) {
    return 3 * x * x - 2;
}

// Newton-Raphson method implementation
void newtonRaphson(double x0, double tol, int max_iterations) {
    double x = x0;
    for (int i = 1; i <= max_iterations; i++) {
        double f_x = func(x);
        double f_derivative_x = func_derivative(x);

        // Check if derivative is close to zero to avoid division by very small numbers
        if (fabs(f_derivative_x) < 1e-8) {
            cout << "Derivative too close to zero. Newton-Raphson method failed." << endl;
            return;
        }

        double x_next = x - f_x / f_derivative_x;

        // Display iteration and current approximation
        cout << "Iteration " << i << ": Root approximation = " << x_next <<" f(x)= "<<func(x_next)<< endl;

        // Check for tolerance
        if (fabs(x_next - x) < tol) {
            cout << "Root found within tolerance at iteration " << i << ": " << x_next << endl;
            return;
        }

        x = x_next;
    }

    cout << "Root approximation after " << max_iterations << " iterations: " << x << endl;
}

int main() {
    // Initial guess and parameters
    double initial_guess = 7;
    double tolerance = 0.01;
    int max_iter = 50;

    cout << "Newton-Raphson Method Iterations:" << endl;
    newtonRaphson(initial_guess, tolerance, max_iter);

    return 0;
}
