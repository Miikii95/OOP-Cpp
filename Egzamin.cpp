#include <iostream>
#include "CVec2.h"
using namespace std;

int main()
{
    CVec2 v1(1, 2);
    CVec2 v2;
    cout << "Podaj wspolrzedne wektora V2:";
    cin >> v2;
    cout << "Wektor V1=" << v1 << endl << "Wektor V2=" << v2 << endl;
    cout << endl << "V1 + V2 = " << v1 + v2 << endl;
    cout << "V1 * V2 = " << v1 * v2 << endl;
    CVec2 v3 = v1 + v2;
    double aveV3 = v3.Ave();
    cout << "AVE ( V1 + V2) = " << aveV3;
    return 0;
}