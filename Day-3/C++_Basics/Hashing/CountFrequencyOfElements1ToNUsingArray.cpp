#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 3, 2, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int hash[100] = {0};

    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Example: frequency of 1 to 4
    for(int i = 1; i <= 4; i++) {
        cout << i << " -> " << hash[i] << endl;
    }

    return 0;
}
