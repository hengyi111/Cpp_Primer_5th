// Exercise 2.35: Determine the types deduced in each of the following definitions. Once
// you’ve figured out the types, write a program to see whether you were correct.
// const int i = 42;
// auto j = i; const auto &k = i; auto *p = &i;
// const auto j2 = i, &k2 = i;

#include <iostream>
using namespace std;

int main()
{
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;
    cout << typeid(i).name() << endl;
    cout << typeid(j).name() << endl;
    cout << typeid(k).name() << endl;
    cout << typeid(p).name() << endl;
    cout << typeid(j2).name() << endl;
    cout << typeid(k2).name() << endl;
    return 0;
}