// Exercise 5.21: Revise the program from the exercise in § 5.5.1 (p. 191) so that it looks
// only for duplicated words that start with an uppercase letter.

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

// 遇到小写字母开头的直接忽略掉了，也即A a A中，A也是连续的
int main()
{
    string s,ps="";
    cout << "please input a sequence of stirng:" << endl;
    bool flag = true;
    while(cin>>s)
    {
        if(!isupper(s[0]))
        {
            continue;
        }
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