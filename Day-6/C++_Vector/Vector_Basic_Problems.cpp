// Day6_VectorPractice.cpp
#include <iostream>
#include <vector>
using namespace std;

// 1. Input & Print Vector
void inputAndPrintVector() {
    vector<int> v;
    cout << "\nEnter 5 elements:\n";
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << "Vector elements: ";
    for (int val : v) {
        cout << val << " ";
    }
    cout << "\n";
}

// 2. Find Max Element
void findMaxElement() {
    vector<int> v = {4, 9, 2, 6, 1};
    int maxVal = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > maxVal) maxVal = v[i];
    }
    cout << "Max element: " << maxVal << "\n";
}

// 3. Remove Last Element (pop_back)
void removeLastElement() {
    vector<int> v = {10, 20, 30, 40};
    cout << "Before pop: ";
    for (int x : v) cout << x << " ";
    v.pop_back();
    cout << "\nAfter pop: ";
    for (int x : v) cout << x << " ";
    cout << "\n";
}

// 4. Reverse Vector
void reverseVector() {
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    for (int i = 0; i < n/2; i++) {
        swap(v[i], v[n - i - 1]);
    }
    cout << "Reversed vector: ";
    for (int x : v) cout << x << " ";
    cout << "\n";
}

// 5. Sum using Iterators
void sumVectorElements() {
    vector<int> v = {5, 10, 15};
    int sum = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        sum += *it;
    }
    cout << "Sum of vector: " << sum << "\n";
}

int main() {
    inputAndPrintVector();
    findMaxElement();
    removeLastElement();
    reverseVector();
    sumVectorElements();
    return 0;
}
