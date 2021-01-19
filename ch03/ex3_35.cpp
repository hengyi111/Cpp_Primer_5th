// Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.
#include<iostream>

using namespace std;

int main()
{
    // 数组索引为负数时，也可以处理。但是不建议，可能会越界
    const int sz = 10;  
    int a[sz];
    for (size_t i = 0; i < sz;++i)
    {
        a[i] = i;
    }
    cout << "the first array:" << endl;
    for(auto j:a)
    {
        cout << j << " ";
    }
    cout << endl;
    // get the pointers to the first and past the last elements
    int *p = begin(a), *q = end(a);
    // while(p!=q)
    for (; p != q;p++)
    {
        *p = 0;
    }
    cout << "the changed array:" << endl;
    for(auto j:a)
    {
        cout << j << " ";
    }
    cout << endl;
    return 0;
}