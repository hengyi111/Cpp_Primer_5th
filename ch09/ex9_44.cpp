// Exercise 9.44: Rewrite the previous function using an index and replace.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void replace_string(string &s, const string &oldVal, const string &newVal)
{
    string::size_type p = 0;
    while ((p = s.find(oldVal, p)) != string::npos)
    {
        s.replace(p, oldVal.size(), newVal);
        p += newVal.size(); // 下标调整到新插入内容之后
    }
}

int main()
{
    string s = "the thru tho！";
    replace_string(s, "thru", "through");
    cout << s << endl;

    replace_string(s, "tho", "though");
    cout << s << endl;

    replace_string(s, "through", "");
    cout << s << endl;
}