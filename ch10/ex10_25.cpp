// Exercise 10.25: In the exercises for § 10.3.2 (p. 392) you wrote a version of biggies
// that uses partition. Rewrite that function to use check_size and bind.

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include<functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    //  使用partition不需要提前排序
    auto wc = partition(words.begin(), words.end(), bind(check_size,_1,sz));
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