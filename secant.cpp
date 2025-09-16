
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Define the function f(x) = e^x - 3x
double f(double x) {
    return exp(x) - 3*x;
}


int main() {
    double x1, x2 ,tol;
    cout<<"enter guess-1 guess-2 and error-tolerance : ";
    cin >> x2;
    cin >> x1;
    cin>> tol;
    int maxIter = 50;

    double root = secant(x1, x2, tol, maxIter);
    cout << "\nApproximate root (Secant Method): " << root << endl;
    return 0;}