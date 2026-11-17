#include <iostream>
#include <iomanip>
#include <cmath>

#include "var.h"
#include "sum.h"

using namespace std;
using namespace nsVar;
using namespace nsSum;

int main() {
    cout << "x_poch = "; cin >> x_p;
    cout << "x_kin  = "; cin >> x_k;
    cout << "dx     = "; cin >> dx;
    cout << "eps    = "; cin >> eps;

    if (x_p <= 1 || x_k <= 1 || dx <= 0 || eps <= 0) {
        cout << "\nError: Condition x > 1, dx > 0, eps > 0 must be met!" << endl;
        return 1;
    }

    cout << "\nTabulation of function arctg(x):\n";
    cout << string(65, '-') << endl;
    cout << "| " << setw(10) << "x"
        << " | " << setw(15) << "arctg(x)"
        << " | " << setw(15) << "S (Taylor)"
        << " | " << setw(12) << "Terms (n)" << " |" << endl;
    cout << string(65, '-') << endl;

    cout << fixed;


    x = x_p;
    while (x <= x_k + dx / 1000) {
        sum();

        cout << "| " << setw(10) << setprecision(4) << x
            << " | " << setw(15) << setprecision(7) << atan(x)
            << " | " << setw(15) << setprecision(7) << s
            << " | " << setw(12) << n << " |" << endl;

        x += dx;
    }

    cout << string(65, '-') << endl;

    return 0;
}