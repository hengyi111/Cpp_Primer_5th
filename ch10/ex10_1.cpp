// Exercise 10.1: The algorithm header defines a function named count that, like
// find, takes a pair of iterators and a value. count returns a count of how often that
// value appears. Read a sequence of ints into a vector and print the count of how
// many elements have a given value.

#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

int main()
{
    int target = 2;
    vector<int> vi;
    int val;

    while(cin>>val)
    {
        vi.push_back(val);
    }
    cout << "目标的个数：" << count(vi.begin(), vi.end(), target);

    return 0;
}