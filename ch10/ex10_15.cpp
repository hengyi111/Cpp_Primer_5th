// Exercise 10.15: Write a lambda that captures an int from its enclosing function and
// takes an int parameter. The lambda should return the sum of the captured int and
// the int parameter.

#include<iostream>

using namespace std;

void add(int a)
{
    auto sum = [a](int b) { return a + b; };
    cout << sum(1) << endl;
}

int main()
{

    add(2);
    add(3);

    return 0;
}