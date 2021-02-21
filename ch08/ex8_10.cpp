// Exercise 8.10: Write a program to store each line from a file in a vector<string>.
// Now use an istringstream to read each element from the vector a word at a time.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include<sstream>

using namespace std;

int main()
{
    ifstream in("data");
    if (!in)
    {
        cerr << "无法打开文件" << endl;
        return -1;
    }
    string line;
    vector<string> words;
    while (getline(in, line))  // 每次读入一行
    {
        words.push_back(line);
    }
    in.close();
    // 输出文件中的内容
    for (auto i : words)
    {
        istringstream line_str(i);
        string word;
        while(line_str>>word)
        {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}