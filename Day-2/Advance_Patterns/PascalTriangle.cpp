#include<iostream>
using namespace std;

void pascalTriangle(int n) {
    for(int i = 0; i < n; i++) {
        int val = 1;

        // Print spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  "; // 2 spaces for better alignment
        }

        // Print values
        for(int j = 0; j <= i; j++) {
            cout << val << "   "; // 3 spaces between numbers
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> n;

    pascalTriangle(n);

    return 0;
}
