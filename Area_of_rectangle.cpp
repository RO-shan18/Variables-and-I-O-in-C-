/* Programmer =  Roshan Mehra
Purpose = Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.
Date = 21/10/22 */

#include<iostream>
using namespace std;

int main(){
    int length, breadth;
    
    cout<<"Enter the length and breadth of a rectangle: "<<endl;
    cin>>length>>breadth;

    int Area = length * breadth;
    cout<<"Area of a rectangle is: "<<Area<<endl;
    
    return 0;
}