// Exercise 11.9: Define a map that associates words with a list of line numbers on
// which the word might occur.

#include<iostream>
#include<map>
#include<list>
#include<string>
#include<sstream>

using namespace std;

// 一个单词可能出现在多行，所以需要使用list<int>
int main()
{
    map<string, list<int>> word_lineno;
    string line;
    string word;
    int lineno = 0;
    // 得到一行
    while(getline(cin,line))
    {
        ++lineno;
        // 构建字符串流，读取每一行中的单词
        istringstream l_in(line);
        while(l_in>>word)
        {
            word_lineno[word].push_back(lineno);
        }
    }
    for(auto w:word_lineno)
    {
        cout << w.first << "所在行：" << endl;
        for(auto ww:w.second)
        {
            cout << ww << " ";
        }
        cout << endl;
    }
}