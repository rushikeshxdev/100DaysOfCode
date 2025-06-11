#include<iostream>
using namespace std;
// a) Function with no parameters & no return
void greet() {
    cout << "Hello, Rushikesh!" << endl;
}


// b) Function with parameters, No return value
void function(string name, int age){  //Function declaration/defination, it contans parameters in it
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"My name is "<<name<<" and my age is "<<age<<endl;
}


// c) Function with parameters and return
int multiply(int a, int b) {
    return a * b;
}

// d) Function with no parameters, but returns
int getValue() {
    return 10;
}




int main(){                                 //Main function
    string name; int age;

    greet(); //a)

    function(name, age);   //b)  
                  
    int result = multiply(4, 5);  //c)
    cout << "Product: " << result<<endl;

    int x = getValue();  //d)
    cout << "Value: " << x;

    return 0;
}