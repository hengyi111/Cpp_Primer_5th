// Exercise 10.9: Implement your own version of elimDups. Test your program by
// printing the vector after you read the input, after the call to unique, and after the
// call to erase.

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

void elimDups(vector<string> &words)
{
    output_words(words);
    sort(words.begin(), words.end());
    output_words(words);
    auto end_unique = unique(words.begin(), words.end());
    output_words(words);
    words.erase(end_unique, words.end());
    output_words(words);

}

int main()
{
    vector<string> vs = {"fox", "jumps", "quick", "red", "slow", "the", "turtle", "red", "the"};
    elimDups(vs);
    return 0;
}