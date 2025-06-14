#include <iostream>
using namespace std;

void frequencyCount(int arr[], int n) {
    int freq[100] = {0};
    for(int i = 0; i < n; i++)
        freq[arr[i]]++;

    cout << "Element : Frequency\n";
    for(int i = 0; i < 100; i++) {
        if(freq[i] > 0)
            cout << i << " : " << freq[i] << endl;
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    frequencyCount(arr, n);
    return 0;
}
