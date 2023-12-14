//#include <iostream>
//#include <cmath>
//using namespace std;
//
//const int MAX_SIZE = 10;
//
//void gaussSeidel(double A[MAX_SIZE][MAX_SIZE], double b[MAX_SIZE], int n, double tolerance) {
//    double x[MAX_SIZE] = {0}; // Initial guess
//
//    int max_iterations = 1000; // Maximum number of iterations (to avoid infinite loops)
//    int iterations = 0;
//    double error = tolerance + 1.0; // Initialize error to ensure at least one iteration
//
//    while (error > tolerance && iterations < max_iterations) {
//        error = 0.0;
//
//        for (int i = 0; i < n; ++i) {
//            double sum = 0.0;
//
//            for (int j = 0; j < n; ++j) {
//                if (j != i) {
//                    sum += A[i][j] * x[j];
//                }
//            }
//
//            double new_x = (b[i] - sum) / A[i][i];
//            error += abs(new_x - x[i]);
//            x[i] = new_x;
//        }
//
//        ++iterations;
//    }
//
//    if (iterations >= max_iterations) {
//        cout << "Method is greater than " << max_iterations << " iterations." << endl;
//    } else {
//        cout << "Terminated after " << iterations << " iterations." << endl;
//    }
//
//    cout << "Solution:" << endl;
//    for (int i = 0; i < n; ++i) {
//        cout << "x[" << i << "] = " << x[i] << endl;
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter the number of equations: ";
//    cin >> n;
//
//    double A[MAX_SIZE][MAX_SIZE];
//    double b[MAX_SIZE];
//
//    cout << "Enter the coefficients of the equations:" << endl;
//    for (int i = 0; i < n; ++i) {
//        cout << "Equation " << (i + 1) << ":" << endl;
//        for (int j = 0; j < n; ++j) {
//            cin >> A[i][j];
//        }
//        cout << "Enter the constant term: ";
//       cin >> b[i];
//    }
//
//    double t;
//    cout << "Enter the tolerable error : ";
//    cin >> t;
//
//    gaussSeidel(A, b, n, t);
//
//    return 0;
//}


#include<bits/stdc++.h>
using namespace std;
int main(void) {
float a[10][10], b[10], m[10]={0}, n[10];
int p = 0, q = 0, i = 0, j = 0;
cout << "Enter size of 2D array : ";
cin >> p;
for (i = 0; i < p; i++) {
for (j = 0; j < p; j++) {
cout << "a[" << i << ", " << j << " ]=";
cin >> a[i][j];
}
}
cout<< "\nEnter constant values\n";
for (i = 0; i < p; i++) {
cout << "b[" << i << ", " << j << " ]="; cin >> b[i];
}
cout<< "\nEnter max iteration : ";
cin >> q;
while (q> 0) {
for (i = 0; i < p; i++) {
n[i] = (b[i] / a[i][i]);
for (j = 0; j < p; j++) {
if (j == i)
continue;
n[i] = n[i] - ((a[i][j] / a[i][i]) * m[j]);
m[i] = n[i];
}
cout<<"x"<<i + 1 << "="<<n[i]<<" ";
} cout << "\n";
q--;
}
return 0;
}
