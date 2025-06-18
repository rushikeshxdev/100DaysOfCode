#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 10, 30};

    s.insert(40);
    s.erase(20);

    for (int val : s) {
        cout << val << " ";
    }

    return 0;
}
