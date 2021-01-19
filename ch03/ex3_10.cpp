//Exercise 3.10: Write a program that reads a string of characters including punctuation
//and writes what was read but with the punctuation removed.

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

// cctype --C character classification functions
int main1()
{
    string str1;
    cout << "input string including punctuation" << endl;
    getline(cin, str1);
    for(auto c:str1)
    {
        if(!ispunct(c))
        {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}

int main()
{
    string str1;
    cout << "input string including punctuation" << endl;
    getline(cin, str1);
    string str2;
    for (decltype(str1.size()) i = 0; i < str1.size();i++)
    {
        if(!ispunct(str1[i]))
        {
            str2 += str1[i];
        }
    }
    cout <<str2<< endl;
    return 0;
}

