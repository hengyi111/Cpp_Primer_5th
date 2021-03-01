// Exercise 11.3: Write your own version of the word-counting program.

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<string, size_t> word_count;
    string word;
    while(cin>>word)
    {
        // 自动创建键，并将值初始化为0
        ++word_count[word];
    }
    for(const auto &w:word_count)
    {
        cout << w.first << "出现了" << w.second << "次" << endl;
    }

    return 0;
}