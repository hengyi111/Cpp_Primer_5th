// Exercise 10.16: Write your own version of the biggies function using lambdas.
// 这里只实现了单纯的biggies
#include<vector>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void biggies(vector<string> &words,vector<string>::size_type sz)
{
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size(); });
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a) { return a.size() >= sz; });
    auto count = words.end() - wc;
    cout << "个数：" << count << endl;
    for_each(wc, words.end(), [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main()
{
    vector<string> vs = {"abcde", "a", "abc", "abcdefghij"};
    biggies(vs, 4);
    return 0;
}