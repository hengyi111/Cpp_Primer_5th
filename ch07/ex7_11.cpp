// Exercise 7.11: Add constructors to your Sales_data class and write a program to
// use each of the constructors.

#include<iostream>
#include "Sales_data.h"

using namespace std;

int main()
{
    Sales_data data1;
    Sales_data data2("2222");
    Sales_data data3("2222", 100, 128, 109);
    Sales_data data(cin);

}