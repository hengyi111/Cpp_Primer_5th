// Exercise 4.28: Write a program to print the size of each of the built-in types.
#include<iostream>
using namespace std;

int main()
{
    cout << "type\t"<< "bytes" << endl;
    cout << "bool\t" << sizeof(bool) << endl;
    cout << "char\t" << sizeof(char) << endl;
    cout << "short\t" << sizeof(short) << endl;
    cout << "int\t" << sizeof(int) << endl;
    cout << "long\t" << sizeof(long) << endl;
    cout << "long long\t" << sizeof(long long) << endl;
    cout << "float\t" << sizeof(float) << endl;
    cout << "double\t" << sizeof(double) << endl;
    cout << "long double\t" << sizeof(long double) << endl;
    return 0;
}