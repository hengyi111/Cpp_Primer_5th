// Exercise 6.12: Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210) to use references instead of pointers to swap the value of two ints. Which version do you think
// would be easier to use and why?
#include<iostream>
using namespace std;


void swap_num(int &p,int &q)
{
    int temp = p;
    p = q;
    q = temp;
}

int main()
{
    int a = 5, b = 10;
    cout << "Before:a,b:" << a <<" "<< b << endl;
    swap_num(a, b);
    cout << "After: a,b:" << a <<" "<< b << endl;
    return 0;
}