#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  
    cout << fixed << setprecision(10);

    double product1 = 1.0;
    int i = 1;
    while (i <= 10) {
        product1 *= (i + 0.5) / sqrt(1 + exp(1.0 / i));
        i++;
    }
    cout << "1) while:    " << product1 << endl;

    double product2 = 1.0;
    i = 1;
    do {
        product2 *= (i + 0.5) / sqrt(1 + exp(1.0 / i));
        i++;
    } while (i <= 10);
    cout << "2) do-while: " << product2 << endl;

    double product3 = 1.0;
    for (i = 1; i <= 10; i++) {
        product3 *= (i + 0.5) / sqrt(1 + exp(1.0 / i));
    }
    cout << "3) for ++:   " << product3 << endl;

    double product4 = 1.0;
    for (i = 10; i >= 1; i--) {
        product4 *= (i + 0.5) / sqrt(1 + exp(1.0 / i));
    }
    cout << "4) for --:   " << product4 << endl;

    return 0;
}