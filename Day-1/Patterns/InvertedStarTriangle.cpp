#include<iostream>
using namespace std;

void rightAngledTriangle(int height){
     for(int i=height; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<"*";
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