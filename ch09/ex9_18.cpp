// Exercise 9.18: Write a program to read a sequence of strings from the standard input
// into a deque. Use iterators to write a loop to print the elements in the deque.

#include <deque>
#include<list>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    deque<string> ds;
    list<string> ls;

    string s;
    while (cin >> s)
    {
        ds.push_back(s);
        ls.push_back(s);
    }
    for (auto it = ds.cbegin(); it != ds.cend(); ++it)
    {
        cout << *it << endl;
    }
    for (auto it = ls.cbegin(); it != ls.cend(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}