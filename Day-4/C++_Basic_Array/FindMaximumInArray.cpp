#include <iostream>
using namespace std;

int getMax(int arr[], int n) {
    int maxVal = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > maxVal) maxVal = arr[i];
    return maxVal;
}

int main() {
    int arr[] = {12, 9, 21, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum = " << getMax(arr, n) << endl;
    return 0;
}
