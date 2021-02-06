// Exercise 6.7: Write a function that returns 0 when it is first called and then generates
// numbers in sequence each time it is called again.

#include<iostream>
using namespace std;

unsigned mycount()
{
    static int count = -1;
    ++count;
    return count;
}

int main()
{
    cout << "input a char" << endl;
    char ch;
    while(cin>>ch)
    {
        cout << "the times are:" << mycount() << endl;
    }
    return 0;
}