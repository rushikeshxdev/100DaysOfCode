#include<iostream>
using namespace std;

void reverseDigitsOfNumber(int n) {
cin >> n;
int rev = 0;
while(n > 0) {
    rev = rev * 10 + (n % 10);
    n /= 10;
}
cout << "Reversed: " << rev;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    reverseDigitsOfNumber(n);

    return 0;
}
