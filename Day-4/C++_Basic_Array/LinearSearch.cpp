#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++)
        if(arr[i] == key) return true;
    return false;
}

int main() {
    int arr[] = {1, 4, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 6;
    cout << "Found? " << (linearSearch(arr, n, key) ? "Yes" : "No") << endl;
    return 0;
}
