// Exercise 12.19: Define your own version of StrBlobPtr and update your StrBlob
// class with the appropriate friend declaration and begin and end members.

#include "my_StrBlob.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        cout << b2.size() << endl;
    }

    cout << b1.size() << endl;
    cout << b1.front() << " " << b1.back() << endl;

    for (auto it = b1.begin(); it!=b1.end();it.incr())
    {
        cout << it.deref() << endl;
    }
    return 0;
}