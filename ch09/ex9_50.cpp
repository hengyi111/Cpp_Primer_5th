// Exercise 9.50: Write a program to process a vector<string>s whose elements represent integral values. Produce the sum of all the elements in that vector. Change
// the program so that it sums of strings that represent floating-point values.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> vs = {"123", "+456", "-789"};
    int sum = 0;
    for(auto v:vs)
    {
        sum += stoi(v);
    }
    cout << sum;

    return 0;
}