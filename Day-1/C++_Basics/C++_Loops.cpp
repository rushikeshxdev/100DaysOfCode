#include<iostream>
using namespace std;

int main(){
    //for loop
    for (int i = 1; i <= 5; i++) {      //(Initialization; condition; update )
        cout << i << " ";
    }

    //while loop
    int j = 1;                          //(Initialization)
    while (j <= 5) {                    //(Condition)
        cout << j << " ";
        j++;                            //(Updation)
    }

    //do-while loop
    int k = 1;                           //(Initialization)
    do {
        cout << k << " ";
        k++;                             //(Updation)
    } while (k <= 5);                    //(Condition)

    return 0;
}