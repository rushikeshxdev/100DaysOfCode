#include<iostream>
using namespace std;

void hollowPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ');
        for (int j = 1; j <= 2*i - 1; j++) {
            if (j == 1 || j == 2*i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter height: ";
    cin >> n;
    hollowPyramid(n);
    return 0;
}
