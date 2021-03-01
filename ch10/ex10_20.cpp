// Exercise 10.20: The library defines an algorithm named count_if. Like find_if,
// this function takes a pair of iterators denoting an input range and a predicate that it
// applies to each element in the given range. count_if returns a count of how often the
// predicate is true. Use count_if to rewrite the portion of our program that counted
// how many words are greater than length 6.

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    auto wc = count_if(words.begin(), words.end(), [sz](const string &a) { return a.size() >= sz; });
    cout << "个数：" << wc << endl;
}

int main()
{
    vector<string> vs = {"abcde", "a", "abc", "abcdefghij"};
    biggies(vs, 4);
    return 0;
}