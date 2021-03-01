// Exercise 10.22: Rewrite the program to count words of size 6 or less using functions
// in place of the lambdas.

#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    // 为了使用bind和_1，需要在前面加上
    // #include <functional> 和using namespace std::placeholders;
    auto wc = count_if(words.begin(), words.end(), bind(check_size, _1, sz));
    cout << "个数：" << wc << endl;
}

int main()
{
    vector<string> vs = {"abcde", "a", "abc", "abcdefghij"};
    biggies(vs, 4);
    return 0;
}