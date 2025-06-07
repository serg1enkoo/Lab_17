#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2)м.
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a num: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is simple num";
    else
        cout << num << " is not a simple num";
    return 0;
}
