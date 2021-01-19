// Exercise 3.32: Copy the array you defined in the previous exercise into another array.
// Rewrite your program to use vectors.

#include<iostream>

using namespace std;

int main()
{
    const unsigned sz = 10;
    int a[sz],b[sz];
    for (size_t i = 0; i < sz;++i)
    {
        a[i] = 2*i;
    }
    for (size_t i = 0; i < sz;++i)
    {
        b[i] = a[i]+1;
    }
    cout << "the first array:" << endl;
    for(auto j:a)
    {
        cout << j << " ";
    }
    cout << endl;

    cout << "the second array:" << endl;
    for(auto j:b)
    {
        cout << j << " ";
    }
    cout << endl;
    return 0;
}