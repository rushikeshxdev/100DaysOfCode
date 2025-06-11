#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }
}

int main() {
    int height = 4;
    printPyramid(height);  // Call the function
    return 0;
}
