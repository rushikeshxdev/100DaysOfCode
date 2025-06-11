#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 5; i++) {
    if (i == 3) continue; // skips 3
    if (i == 5) break;    // stops loop at 4
    cout << i << " ";
}

    return 0;
}