#include<iostream>
using namespace std;

void diamondPattern(int n) {
    // Upper half
    for(int i = 1; i <= n; i++) {
        cout << string(n - i, ' ') << string(2*i - 1, '*') << endl;
    }
    // Lower half
    for(int i = n - 1; i >= 1; i--) {
        cout << string(n - i, ' ') << string(2*i - 1, '*') << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    diamondPattern(n);
    return 0;
}
