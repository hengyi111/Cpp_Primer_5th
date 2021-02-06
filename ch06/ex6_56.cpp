// Exercise 6.56: Call each element in the vector and print their result.

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
// calculate the value
void myCompute(int a,int b,int (*p)(int,int))
{
    cout << p(a, b) << endl;
}

int main()
{
    decltype(func1) *p1 = func1, *p2 = func3, *p3 = func3, *p4 = func4;
    vector<decltype(func1) *> vF = {p1, p2, p3, p4};
    int i = 5, j = 10;
    // calling the func1 to func4,print the result
    for(auto p:vF)
    {
        myCompute(i, j, p);
    }
    return 0;
}