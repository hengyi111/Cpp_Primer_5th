// Exercise 8.1: Write a function that takes and returns an istream&. The function
// should read the stream until it hits end-of-file. The function should print what it reads
// to the standard output. Reset the stream so that it is valid before returning the stream.

#include <iostream>
#include <stdexcept>

using namespace std;

istream &f(istream &in)
{
    int v;
    while (in >> v, !in.eof()) // 直到遇到文件结尾停止读取
    {
        if (in.bad())
            throw runtime_error("IO流错误");
        if (in.fail())
        {
            cerr << "数据错误,请重试：" << endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
        cout << v << endl;
    }
    //完成所有操作后，复位并且返回
    in.clear();
    return in;
}

int main()
{
    cout << "input some int,and press ctrl+z" << endl;
    f(cin);
    return 0;
}