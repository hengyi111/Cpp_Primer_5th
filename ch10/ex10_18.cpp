// Exercise 10.18: Rewrite biggies to use partition instead of find_if. We described the partition algorithm in exercise 10.13 in § 10.3.1 (p. 387).

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    //  使用partition不需要提前排序
    auto wc = partition(words.begin(), words.end(), [sz](const string &a) { return a.size() >= sz; });
    auto count = wc - words.begin();
    cout << "个数：" << count << endl;
    for_each(words.begin(), wc, [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main()
{
    vector<string> vs = {"abcde", "a", "abc", "abcdefghij"};
    biggies(vs, 4);
    return 0;
}