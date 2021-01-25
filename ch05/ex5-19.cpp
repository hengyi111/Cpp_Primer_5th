// Exercise 5.19: Write a program that uses a do while loop to repetitively request two
// strings from the user and report which string is less than the other.

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1, s2;
    do
    {
        cout << "input two strings:" << endl;
        cin >> s1 >> s2;
        if(s1.size()<s2.size())
        {
            cout << "the shorter string is: " << s1 << endl;
        }
        else if(s1.size()>s2.size())
        {
             cout << "the shorter string is: " << s2 << endl;
        }
        else
        {
            cout << "equal!" << endl;
        }
    } while (cin);  // 当cin有正常输入时，该循环持续。

    return 0;
}