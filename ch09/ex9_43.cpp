// Exercise 9.43: Write a function that takes three strings, s, oldVal, and newVal.
// Using iterators, and the insert and erase functions replace all instances of oldVal
// that appear in s by newVal. Test your function by using it to replace common abbreviations, such as “tho” by ”though” and ”thru” by “through”.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void replace_string(string &s, const string &oldVal, const string &newVal)
{
    auto l = oldVal.size();
    if (!l) // if oldVal is empty
    {
        return;
    }
    auto iter = s.begin();
    // 若s后面少于oldVal的长度，肯定不相等,不满足此条件则不再需要比较
    while (iter <= s.end() - l)
    {
        auto iter1 = iter;
        auto iter2 = oldVal.begin();
        // s中iter开始的子串必须每个字符都与oldVal相等
        while (iter2 != oldVal.end() && *iter1 == *iter2)
        {
            ++iter1;
            ++iter2;
        }
        if (iter2 == oldVal.end())
        {
            iter = s.erase(iter, iter1); // 删除与oldVal相等的部分
            if (newVal.size())
            { // 如果新串不为空
                iter2 = newVal.end();
                do
                {
                    --iter2;
                    iter = s.insert(iter, *iter2);
                } while (iter2 > newVal.begin());
            }
            iter += newVal.size();
        }

        else
        {
            ++iter;
        }
    }
}

int main()
{
    string s = "the thru tho";
    replace_string(s, "thru", "through");
    cout << s << endl;

    replace_string(s, "tho", "though");
    cout << s << endl;

    replace_string(s, "through", "");
    cout << s << endl;
}