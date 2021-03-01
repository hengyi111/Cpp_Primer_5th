// Exercise 10.37: Given a vector that has ten elements, copy the elements from positions 3 through 7 in reverse order to a list

#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

int main()
{
    // 用流迭代器输出
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    copy(v.begin(), v.end(), out_iter);
    cout << endl;

    list<int> L;
    vector<int>::reverse_iterator re(v.begin() + 2);
    // v.begin() + 7是开区间，是无法取到的
    // 转成成反向迭代器之后，变成闭区间，可以取到，就是v.begin() + 6
    vector<int>::reverse_iterator rb(v.begin() + 7);
    copy(rb, re, back_inserter(L));
    copy(L.begin(), L.end(), out_iter);
    cout << endl;
    return 0;
}