// Exercise 4.21: Write a program to use a conditional operator to find the elements in a
// vector<int> that have odd value and double the value of each such element.
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>

using namespace std;
int main()
{

    vector<int> v;
    srand((unsigned)time(NULL));
    cout << "the original data:" << endl;
    for (int i = 0; i != 10;++i)
    {
        v.push_back(rand() % 10);
        cout << v[i] << " ";
    }
    cout << endl;
    for(auto &val:v)
    {
        val = (val % 2 == 1) ? 2 * val : val;
    }
    cout << "the modified data:" << endl;
    for (auto it = v.cbegin(); it != v.cend();++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}