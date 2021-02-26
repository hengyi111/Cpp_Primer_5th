// Exercise 9.42: Given that you want to read a character at a time into a string, and
// you know that you need to read at least 100 characters, how might you improve the
// performance of your program?

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void input_string(string &s)
{
    s.reserve(100);
    char c;
    while(cin>>c)
    {
        s.push_back(c);
    }
}

int main()
{

    string s;
    input_string(s);
    cout << s << endl;
    return 0;
}