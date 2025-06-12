#include<iostream>
using namespace std;

void butterflyPattern(int n) {
    // Upper half
    for(int i = 1; i <= n; i++) {
        cout << string(i, '*') << string(2*(n-i), ' ') << string(i, '*') << endl;
    }
    // Lower half
    for(int i = n; i >= 1; i--) {
        cout << string(i, '*') << string(2*(n-i), ' ') << string(i, '*') << endl;
    }
}

int main() {
    int n;
    cout << "Enter value for pattern: ";
    cin >> n;
    butterflyPattern(n);
    return 0;
}
