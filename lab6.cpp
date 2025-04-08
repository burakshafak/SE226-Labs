#include <iostream>
using namespace std;


double harmonic(int n) {
    if (n == 1) return 1.0;
    return 1.0 / n + harmonic(n - 1);
}


double harmonic() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n == 1) return 1.0;
    return 1.0 / n + harmonic(n - 1);
}
