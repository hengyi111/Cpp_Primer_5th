// Exercise 10.28: Copy a vector that holds the values from 1 to 9 inclusive, into three
// other containers. Use an inserter, a back_inserter, and a front_inserter,
// respectivly to add elements to these containers. Predict how the output sequence varies
// by the kind of inserter and verify your predictions by running your programs.

#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

int main()
{
    // 需要保证vi是排好序了的
    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> l1, l2, l3;
    // 1 inserter,插入在容器第一个元素之前
    unique_copy(vi.begin(), vi.end(), inserter(l1, l1.begin()));

    // 2 使用back_inserter，插入容器之后
    unique_copy(vi.begin(), vi.end(), back_inserter(l2));
    // front_inserter会与众不同，是逆序的
    // 3 使用front_inserter，每次都插入在容器第一个元素之前
    unique_copy(vi.begin(), vi.end(), front_inserter(l3));

    cout << "inserter" << endl;
    for (auto v : l1)
    {
        cout << v << " ";
    }
    cout << endl;

    cout << "back_inserter" << endl;
    for (auto v : l2)
    {
        cout << v << " ";
    }
    cout << endl;

    cout << "front_inserter" << endl;
    for (auto v : l3)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}