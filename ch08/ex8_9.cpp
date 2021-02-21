// Exercise 8.9: Use the function you wrote for the first exercise in § 8.1.2 (p. 314) to print
// the contents of an istringstream object.

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

using namespace std;

istream &f(istream &in)
{
    string v;
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
    ostringstream msg;
    msg << "C++ primer !" << endl;
    istringstream in(msg.str());
    f(in);
    return 0;
}