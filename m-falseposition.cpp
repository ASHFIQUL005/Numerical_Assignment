    #include <iostream>
    #include <cmath>
    #include <iomanip>
    using namespace std;
// Define the function f(x) = e^x - 3x
    double f(double x) {
        return exp(x) - 3*x;
    }

    int main() {
        double x1, x2, tol;
        cout<<"enter guese-1 gause-2 and error-tolerance: ";
        cin >> x1 >> x2 >> tol;

        if (f(x1) * f(x2) > 0) {
            cout << "Wrong guesses! f(x1) and f(x2) must have opposite signs." << endl;
            return 1;
        }

        double x0 = x1;
        double f0;
        double f1 = f(x1), f2 = f(x2);
        int iter = 1;

        cout << left << setw(6) << "Iter"
             << setw(12) << "x1"
             << setw(12) << "x2"
             << setw(12) << "x0"
             << setw(12) << "f(x0)"
              << setw(12) << "f(x1)"
              << setw(12) << "f(x2)"
             << setw(16) << "Relative Error" << endl;