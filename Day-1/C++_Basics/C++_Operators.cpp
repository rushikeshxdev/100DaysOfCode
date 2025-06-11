#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 3;
    //Arithmetic Operators
    cout << a + b << endl;  // 13
    cout << a - b << endl;  // 7
    cout << a * b << endl;  // 30
    cout << a / b << endl;  // 3 (integer division)
    cout << a % b << endl;  // 1

    //Relational Operators
    int x = 5, y = 10;
    cout << (x == y) << endl;  // 0 (false)
    cout << (x != y) << endl;  // 1 (true)
    cout << (x > y) << endl;   // 0
    cout << (x < y) << endl;   // 1

    //Logical Operators
    int p = 1, q = 0;
    cout << (p && q) << endl;  // 0 : if both p and q is 1 then output is 1, or else 0;
    cout << (p || q) << endl;  // 1 : if one of them is 0 it will be 0, or else 1
    cout << (!p) << endl;      // 0 :opposite of p

    //Assignment Operators
    int r = 5;                 //assigning value of r=5
    r += 3;  // x = x + 3 → 8  //r=r+3; r=5+3=8;
    r *= 2;  // x = x * 2 → 16 //r=r*2; r=8*2=16;
    cout << r << endl;

    //Increment/Decrement
    int s = 5;
    cout << s++ << endl;  // 5 (then becomes 6)
    cout << ++s << endl;  // 7

    return 0;
}
