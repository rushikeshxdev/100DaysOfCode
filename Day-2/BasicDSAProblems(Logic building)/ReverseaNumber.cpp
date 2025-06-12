#include<iostream>
using namespace std;

void reverseNumber(int n){
int rev = 0;
while(n > 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
}
cout << "Reversed: " << rev;

}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    reverseNumber(n);
    return 0;
}