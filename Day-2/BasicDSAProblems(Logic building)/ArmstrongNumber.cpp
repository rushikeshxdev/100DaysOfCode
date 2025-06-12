#include <iostream>
using namespace std;

int intPower(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

void armstrongNumber(int n) {
    int sum = 0, digits = 0;
    int temp = n;

    // Count digits
    int t = n;
    while (t > 0) {
        t /= 10;
        digits++;
    }

    t = n;
    while (t > 0) {
        int digit = t % 10;
        sum += intPower(digit, digits);
        t /= 10;
    }

    cout << (sum == n ? "Armstrong" : "Not Armstrong") << endl;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    armstrongNumber(n);

    return 0;
}
