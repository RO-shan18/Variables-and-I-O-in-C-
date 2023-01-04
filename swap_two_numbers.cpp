/* Programmer =  Roshan Mehra
Purpose = Q6 - Write a C++ program to swap two numbers with the help of a third variable.
Date = 21/10/22  */

#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;

    cout<<"Enter two numbers: "<<endl;
    cin>>n1>>n2;

    n3 = n1;
    n1 = n2;
    n2 = n3;

    cout<<"After swapping: "<<endl
        <<n1<<" "<<n2;
    return 0;
}