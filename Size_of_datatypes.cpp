/* Programmer =  Roshan Mehra
Purpose = Q5 - Write a C++ program to find size of basic data types.
Date = 21/10/22  */

#include<iostream>
using namespace std;

int main(){
    
   cout<<"size of char datatype: "<<sizeof(char)<<" byte"<<endl; 
   cout<<"size of short datatype: "<<sizeof(short)<<" bytes"<<endl; 
   cout<<"size of int datatype: "<<sizeof(int)<<" bytes"<<endl; 
   cout<<"size of long datatype: "<<sizeof(long)<<" bytes"<<endl;
   cout<<"size of long long datatype: "<<sizeof(long long)<<" bytes"<<endl; 
   cout<<"size of float datatype: "<<sizeof(float)<<" bytes"<<endl; 
   cout<<"size of double datatype: "<<sizeof(double)<<" bytes"<<endl; 
   cout<<"size of long double datatype: "<<sizeof(long double)<<" bytes"<<endl; 
   cout<<"size of bool datatype: "<<sizeof(bool)<<" byte"<<endl; 
    return 0;
}