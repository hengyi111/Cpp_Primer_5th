//Exercise 3.4: Write a program to read two strings and report whether the strings are equal. 
// If not, report which of the two is larger. Now, change the program to report
// whether the strings have the same length, and if not, report which is longer.


#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1, str2;
    cout << "please input str1,str2" << endl;
    cin >> str1 >> str2;
    // compare the dictionary order
    if(str1==str2)
    {
        cout << "equal" << endl;
    }
    else if(str1>str2)
    {
        cout << "str1 is larger" << endl;
    }
    else
    {
        cout << "str2 is larger" << endl;
    }
    // compare the length
    auto len1 = str1.size();  // the return value is unsigned ,use auto
    auto len2 = str2.size();

    if(len1==len2)
    {
        cout << "size equal" << endl;
    }
    else if(len1>len2)
    {
        cout << "str1's size is larger:" << len1 - len2 << endl;
    }
    else
    {
        cout << "str2's size is larger:" << len2 - len1 << endl;
    }

    return 0;
}