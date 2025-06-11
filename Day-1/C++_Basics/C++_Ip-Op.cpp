#include<iostream>     //Header file stands for input-output stream, provides functionalities to perform input and output operations using cin, cout
using namespace std;  // Used to avoid writing "std::" again and again!!

int main(){
    int age; const string name="Rushi";        //int, var, char, string, etc. are datatypes used before the varibles, to describe the type of data variables hold.
    // string name = "Sumit";                  //Const: It is used to declare variable whose value cannot be changed after initialization.
    cout<<name<<endl;                          //It will show error!!! and endl: used to go to the next line
    cout<<"Enter the age of student: ";        //cout & cin: Are the iostream libraries used to take variable value from user and print it. 
    cin>>age;
    cout<<"The age is "<<age;
    return 0;                                 //It is used to indicate the end of the main function.
}