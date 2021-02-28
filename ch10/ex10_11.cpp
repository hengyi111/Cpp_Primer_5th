// Exercise 10.11: Write a program that uses stable_sort and isShorter to sort a
// vector passed to your version of elimDups. Print the vector to verify that your
// program is correct.

#include<algorithm>
#include<vector>
#include<iostream>
#include<string>

using namespace std;
inline void output_words(vector<string> &words)
{
    for (auto it = words.cbegin(); it != words.cend();++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
bool isShorter(const string &s1,const string &s2)
{
    return s1.size() < s2.size();
}

void elimDups(vector<string> &words)
{
    output_words(words);
    sort(words.begin(), words.end());
    output_words(words);
    auto end_unique = unique(words.begin(), words.end());
    output_words(words);
    words.erase(end_unique, words.end());
    output_words(words);
    // 从小到大排序，并且相同长度的元素保持字典序
    stable_sort(words.begin(), words.end(), isShorter);
    output_words(words);
}


int main()
{
    vector<string> vs = {"fox", "jumps", "quick", "red", "slow", "the", "turtle", "red", "the"};
    elimDups(vs);
    return 0;
}