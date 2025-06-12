#include<iostream>
using namespace std;

void fibonacciSeries(int n) {

int a = 0, b = 1;
cout << a << " " << b << " ";
for(int i = 2; i < n; i++) {
    int next = a + b;
    cout << next << " ";
    a = b;
    b = next;
}

}

int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    fibonacciSeries(n);

    return 0;
}
