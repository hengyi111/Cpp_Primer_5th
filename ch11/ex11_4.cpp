// Exercise 11.4: Extend your program to ignore case and punctuation. For example,
// “example.” “example,” and “Example” should all increment the same counter.

#include <iostream>
#include <map>
#include <string>

using namespace std;

// 遍历字符串，去掉标点，将大写转换为小写
string &trans(string &s)
{
    for (int p = 0; p < (int)s.size(); ++p)
    {
        if (s[p] > 'A' && s[p] <= 'Z')
        {
            s[p] = s[p] - ('A' - 'a');  // 将大写转为小写
        }
        else if (s[p] == ',' || s[p] == '.')
        {
            s.erase(p, 1);  // 去掉标点
        }
    }
    return s;
}

int main()
{
    map<string, size_t> word_count;
    string word;

    while (cin >> word)
    {
        // 自动创建键，并将值初始化为0
        ++word_count[trans(word)];
    }
    for (const auto &w : word_count)
    {
        cout << w.first << "出现了" << w.second << "次" << endl;
    }

    return 0;
}