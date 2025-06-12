#include<iostream>
using namespace std;

void primeCheck(int n){
   bool isPrime = true;
   for(int i = 2; i <= n / 2; i++) {
      if(n % i == 0) {
         isPrime = false;
         break;
      }
   }
cout << (isPrime ? "Prime" : "Not Prime");
}

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  primeCheck(n);
  return 0;
}