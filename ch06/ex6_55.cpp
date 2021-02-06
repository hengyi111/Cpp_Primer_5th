// Exercise 6.55: Write four functions that add, subtract, multiply, and divide two int
// values. Store pointers to these functions in your vector from the previous exercise.

#include<iostream>
#include<vector>

using namespace std;


int func1(int a,int b)// add
{
    return a + b;
}

int func2(int a,int b)//minus
{
    return a - b;
}

int func3(int a,int b)//multiple
{
    return a * b;
}

int func4(int a,int b)//divide
{
    return a / b;
}
int main()
{
    decltype(func1) *p1 = func1, *p2 = func3, *p3 = func3, *p4 = func4;
    vector<decltype(func1) *> vF = {p1, p2, p3, p4};
    return 0;
}