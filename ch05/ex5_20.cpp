// Exercise 5.20: Write a program to read a sequence of strings from the standard input
// until either the same word occurs twice in succession or all the words have been read.
// Use a while loop to read the text one word at a time. Use the break statement to
// terminate the loop if a word occurs twice in succession. Print the word if it occurs
// twice in succession, or else print a message saying that no word was repeated.

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s,ps="";
    cout << "please input a sequence of stirng:" << endl;
    bool flag = true;
    while(cin>>s)
    {
        if(s==ps)
        {
            cout << "连续出现的字符为：" << s << endl;
            flag = false;
            break;
        }
        ps = s;
    }
    if(flag)
    {
        cout << "没有连续出现的字符！" << endl;
    }

    return 0;
}