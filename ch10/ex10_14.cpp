// Exercise 10.14: Write a lambda that takes two ints and returns their sum.

#include<iostream>

using namespace std;

int main()
{
    auto sum = [](int a, int b) { return a + b; };
    cout << sum(1, 1) << endl;

    return 0;
}