#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

double normalDist(double x, double mean, double stdDev) {
    return 0.5*(1 + erf((x - mean) / (stdDev * pow(2.0,0.5))));
}

int main() {
    double mean, stdDev, n1, n2, n3;
    cin >> mean >> stdDev >> n1 >> n2 >> n3;
    
    cout << fixed << setprecision(3) << normalDist(n1, mean, stdDev) << endl;
    cout << normalDist(n3, mean, stdDev) - normalDist(n2, mean, stdDev) << endl;
    return 0;
}
