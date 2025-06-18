#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    v.push_back(40);  // Add element at end
    v.pop_back();     // Remove last element

    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}
