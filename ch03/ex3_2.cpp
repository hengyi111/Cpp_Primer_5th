//Exercise 3.2: Write a program to read the standard input a line at a time. Modify your
//program to read a word at a time.
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string line;
    cout << "input an line" << endl;
    //getline每次读一行，遇到回车结束
    while(getline(cin,line))
    {
        cout << line << endl;
        goto FLAG;
    }
    
    FLAG:
    string word;
    cout << "input an word" << endl;
    //cin每次读一个词，遇到空白结束
    while(cin>>word)
    {
        cout << word << endl;
    }
    return 0;
}