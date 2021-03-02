// Exercise 11.16: Using a map iterator write an expression that assigns a value to an
// element.

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, int> m;
    auto it = m.begin();
    it->second = 2;
    cout << it->first << " " << it->second << endl;
}