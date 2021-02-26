// Exercise 9.46: Rewrite the previous exercise using a position and length to manage
// the strings. This time use only the insert function.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void name_string(string &name, const string &prefix, const string &suffix)
{
    name.insert(0, " "); // 插入空格
    // 空格前插入前缀
    name.insert(0, prefix);
    name.insert(name.size(), " ");
    name.insert(name.size(), suffix);
}

int main()
{
    string s = "James Bond";
    name_string(s, "Mr.", "II");
    cout << s << endl;
    s = "M";
    name_string(s, "Mrs.", "III");
    cout << s << endl;
    return 0;
}