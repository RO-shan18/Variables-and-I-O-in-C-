/* Programmer =  Roshan Mehra
Purpose = Q4 - Write a C++ program to calculate the cube of a number.
Date = 21/10/22  */

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    int cube = number * number * number;
    cout<<"Cube of a "<<number<<" is: "<<cube;
    return 0;
}