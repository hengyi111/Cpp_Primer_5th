// Exercise 10.13: The library defines an algorithm named partition that takes a predicate and partitions the container so that values for which the predicate is true appear
// in the first part and those for which the predicate is false appear in the second part.
// The algorithm returns an iterator just past the last element for which the predicate
// returned true. Write a function that takes a string and returns a bool indicating
// whether the string has five characters or more. Use that function to partition words.
// Print the elements that have five or more characters.

#include<algorithm>
#include<vector>
#include<iostream>
#include<string>

using namespace std;
// 只输出迭代器指向的元素
inline void output_words(vector<string>::iterator beg,vector<string>::iterator end)
{
    for (auto it = beg; it != end;++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
// 谓词
bool five_or_more(const string &s1)
{
    return s1.size() >= 5;
}

int main()
{
    vector<string> vs = {"fox", "jumps", "quick", "red", "slow", "the", "turtle", "red", "the"};
    auto iter = partition(vs.begin(), vs.end(), five_or_more);
    output_words(vs.begin(), iter);
    return 0;
}