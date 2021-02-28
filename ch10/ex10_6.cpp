// Exercise 10.6: Using fill_n, write a program to set a sequence of int values to 0.

#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;
int main()
{
    vector<int> vi = {1, 2, 3, 4, 5};
    // accumulate ————#include<numeric>
    fill_n(vi.begin(), vi.size(), 0);
    for (auto it = vi.begin(); it != vi.end();++it)
    {
        cout << *it << " ";
    }

    return 0;
}