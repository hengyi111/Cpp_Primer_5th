// Exercise 8.13: Rewrite the phone number program from this section to read from a
// named file rather than from cin.

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

string format(const string &s) { return s; }
bool valid(const string &s)
{
    return true; // 这里简单返回true
}
int main(int argc, char *argv[])
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    if (argc != 2)
    {
        cerr << "请输入文件名" << endl;
        return -1;
    }
    ifstream in(argv[1]);
    if (!in)
    {
        cerr << "无法打开输入文件" << endl;
        return -1;
    }

    while (getline(in, line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    ostringstream os;
    for (const auto &entry : people)
    {                                     // for each entry in people
        ostringstream formatted, badNums; // objects created on each loop
        for (const auto &nums : entry.phones)
        { // for each number
            if (!valid(nums))
            {
                badNums << " " << nums; // string in badNums
            }
            else
                // ‘‘writes’’ to formatted’s string
                formatted << " " << format(nums);
        }
        if (badNums.str().empty())         // there were no bad numbers
            os << entry.name << " "        // print the name
               << formatted.str() << endl; // and reformatted numbers
        else                               // otherwise, print the name and bad numbers
            cerr << "input error: " << entry.name
                 << " invalid number(s) " << badNums.str() << endl;
    }
    cout << os.str() << endl;
    return 0;
}