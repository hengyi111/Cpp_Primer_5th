// Exercise 9.45: Write a funtion that takes a string representing a name and two other
// strings representing a prefix, such as “Mr.” or “Ms.” and a suffix, such as “Jr.” or
// “III”. Using iterators and the insert and append functions, generate and return a
// new string with the suffix and prefix added to the given name.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void name_string(string &name,const string &prefix,const string &suffix)
{
    name.insert(name.begin(), 1, ' ');  // 插入空格
    // 空格前插入前缀
    name.insert(name.begin(), prefix.begin(), prefix.end());
    name.append(" ");// 后面插入空格
    // 空格后插入后缀
    name.append(suffix.begin(), suffix.end());
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