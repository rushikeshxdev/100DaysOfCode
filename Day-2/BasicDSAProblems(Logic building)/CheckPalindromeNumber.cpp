#include<iostream>
using namespace std;

void palindromeNumber(int n){
     int original = n, rev = 0;
     while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
     }
    if(rev == original) cout << "Palindrome";
    else cout << "Not a palindrome";
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    palindromeNumber(n);
    return 0;
}