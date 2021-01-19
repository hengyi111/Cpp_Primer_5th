// Exercise 3.31: Write a program to define an array of ten ints. Give each element the
// same value as its position in the array

#include<iostream>

using namespace std;

int main()
{
    const unsigned sz = 10;
    int a[sz];
    for (size_t i = 0; i < sz;++i)
    {
        a[i] = 2*i;
    }
    for(auto j:a)
    {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}