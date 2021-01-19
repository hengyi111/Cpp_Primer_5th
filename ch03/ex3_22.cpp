// Exercise 3.22: Revise the loop that printed the first paragraph in text to instead
// change the elements in text that correspond to the first paragraph to all uppercase.
// After you’ve updated text, print its contents.
//
// for (auto it = text.cbegin();
// it != text.cend() && !it->empty(); ++it)
// cout << *it << endl;

#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    vector<string> text;
    string s;
    // 利用getline读取一句话，回车产生空串，表示段落结束
    while (getline(cin, s))
    {
        text.push_back(s);
    }
    // 遍历vector，遇到空串停止循环
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        // 遍历每一个string，也是用迭代器
        for (auto it2 = it->begin(); it2 != it->end(); ++it2)
        {
            *it2 = toupper(*it2);
        }
        cout << *it << endl;  // print the current string
    }

    return 0;
}