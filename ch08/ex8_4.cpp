// Exercise 8.4: Write a function to open a file for input and read its contents into a
// vector of strings, storing each line as a separate element in the vector.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

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
    //while (getline(in, line))  // 每次读入一行
    while (in >> line)  // 每次读入一个单词
    {
        words.push_back(line);
    }
    in.close();
    // 输出文件中的内容
    for (auto i : words)
    {
        cout << i << endl;
    }
    return 0;
}