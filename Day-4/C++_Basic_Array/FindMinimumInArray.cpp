#include <iostream>
using namespace std;

int getMin(int arr[], int n) {
    int minVal = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < minVal) minVal = arr[i];
    return minVal;
}

int main() {
    int arr[] = {12, 9, 21, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Minimum = " << getMin(arr, n) << endl;
    return 0;
}
