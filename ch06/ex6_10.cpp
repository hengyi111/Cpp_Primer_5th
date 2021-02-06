// Exercise 6.10: Using pointers, write a function to swap the values of two ints. Test
// the function by calling it and printing the swapped values.

#include<iostream>
using namespace std;


void swap_num(int *p,int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int a = 5, b = 10;
    cout << "Before:a,b:" << a <<" "<< b << endl;
    swap_num(&a, &b);
    cout << "After: a,b:" << a <<" "<< b << endl;
    return 0;
}