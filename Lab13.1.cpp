#include <iostream>
#include <iomanip>
#include <cmath>

#include "dod.h"
#include "sm.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSm;
using namespace nsVar;

int main()
{
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << endl;

    cout << "---------------------------------------------------------------------------------" << endl;
    cout << "|" << setw(10) << "x" << setw(10) << "|";
    cout << setw(14) << "ln((x+1)/(x-1))" << setw(6) << "|";
    cout << setw(10) << "n" << setw(10) << "|";
    cout << setw(10) << "S" << setw(10) << "|" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        sm();
        cout << "|" << setw(10) << setprecision(3) << x << setw(10) << "|";
        cout << setw(10) << setprecision(3) << log10((x+1)/(x-1))<< setw(10) << "|";
        cout << setw(10) << setprecision(3) << n << setw(10) << "|";
        cout << setw(10) << setprecision(3) << s + (4 * atan(1.0)) / 2. << setw(10) << "|" << endl;

        x += dx;
    }

    cout << "---------------------------------------------------------------------------------" << endl;

    return 0;
}
