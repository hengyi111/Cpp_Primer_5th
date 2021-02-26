// Exercise 9.49: A letter has an ascender if, as with d or f, part of the letter extends
// above the middle of the line. A letter has a descender if, as with p or g, part of the
// letter extends below the line. Write a program that reads a file containing words and
// reports the longest word that contains neither ascenders nor descenders.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// 输出的单词不能包含上下出头的单词，并且长度最长
void find_longest_word(ifstream &in)
{
    string s, longest_word;
    int max_length = 0;
    while (in >> s)
    {
        if (s.find_first_of("bdgghjklpqty") != string::npos)
        {
            continue; // 只要存在，就不符合题目的要求
        }
        cout << s << " ";
        if (max_length < s.size())
        {
            max_length = s.size();
            longest_word = s;
        }
    }
    cout << endl << "最长的字符串：" << longest_word << endl;
}
int main(int argc,char *argv[])
{
    ifstream in(argv[1]);
    if(!in)
    {
        cerr << "无法打开输入文件" << endl;
        return -1;
    }
    find_longest_word(in);
    return 0;
}