// Exercise 9.41: Write a program that initializes a string from a vector<char>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    vector<char> vc = {'H', 'I'};
    string s(vc.data(), vc.size());
    cout << s << endl;
    return 0;
}