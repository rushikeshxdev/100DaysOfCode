#include <iostream>
using namespace std;

int getSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int main() {
    int arr[] = {5, 3, 8, 2, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Sum = " << getSum(arr, n) << endl;
    return 0;
}
