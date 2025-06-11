#include<iostream>
using namespace std;

void rightAngledTriangle(int height){
     for(int i=1; i<=height; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
     }
}

int main(){
   int height;
   cout<<"Enter the height of the reactangle: ";
   cin>>height;

   rightAngledTriangle(height);

   return 0;
}