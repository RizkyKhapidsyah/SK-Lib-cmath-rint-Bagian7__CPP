#include <iostream>
#include <cmath>
#include <cfenv>
#include <conio.h>

using namespace std;

int main() {
    int x = 15;
    double result;

    fesetround(FE_DOWNWARD);
    result = rint(x);
    cout << "Rounding downward (" << x << ") = " << result << endl;

    _getch();
    return 0;
}