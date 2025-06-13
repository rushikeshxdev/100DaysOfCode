#include <iostream>
#include <map>
using namespace std;

int main() {
    string s = "rushikesh";
    map<char, int> mp;

    for(char ch : s) {
        mp[ch]++;
    }

    for(auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
