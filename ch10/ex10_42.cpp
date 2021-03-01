// Exercise 10.42: Reimplement the program that eliminated duplicate words that we
// wrote in § 10.2.3 (p. 383) to use a list instead of a vector.

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> words = {"the", "the", "book", "red", "red", "open"};
    words.sort();

    for (auto v : words)
    {
        cout << v << " ";
    }
    cout << endl;
    words.unique();

    for (auto v : words)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}