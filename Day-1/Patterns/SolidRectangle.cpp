#include<iostream>
using namespace std;

void solidReactangle(int length, int breadth){
    for(int i=0; i<breadth; i++){
        for(int j=0; j<length; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int length, breadth;
    cout<<"Enter length and breadth respectively: ";
    cin>>length>>breadth;
    solidReactangle(length, breadth);
    return 0;
}
