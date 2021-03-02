// Exercise 11.12: Write a program to read a sequence of strings and ints, storing each
// into a pair. Store the pairs in a vector.

#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if (!in)
    {
        cerr << "failed!" << endl;
        return EXIT_FAILURE;
    }
    vector<pair<string, int>> data;
    string s;
    int v;
    while (in >> s && in >> v)
    {
        // make_pair(s,v)或者{s,v}
        data.push_back(pair<string, int>(s, v));
    }
    for (const auto &d : data)
    {
        cout << d.first << " " << d.second << endl;
    }

    return 0;
}