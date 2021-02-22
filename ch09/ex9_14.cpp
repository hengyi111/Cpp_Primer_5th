// Exercise 9.14: Write a program to assign the elements from a list of char* pointers
// to C-style character strings to a vector of strings.

#include <list>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    list<char *> slist = {"hello", "nihao", "!"};
    vector<string> vlist1(slist.begin(), slist.end());

    vector<string> vlist2;
    vlist2.assign(slist.begin(), slist.end());
    cout << vlist1[0] << " " << vlist1[vlist1.size() - 1] << endl;
    cout << vlist2[0] << " " << vlist2[vlist2.size() - 1] << endl;

    return 0;
}