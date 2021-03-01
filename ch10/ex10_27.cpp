// Exercise 10.27: In addition to unique (§ 10.2.3, p. 384), the library defines function
// named unique_copy that takes a third iterator denoting a destination into which
// to copy the unique elements. Write a program that uses unique_copy to copy the
// unique elements from a vector into an initially empty list.

#include<algorithm>
#include<vector>
#include<list>
#include<iostream>

using namespace std;

int main()
{
    // 需要保证vi是排好序了的
    vector<int> vi = {1, 2, 2, 3, 4, 5, 5, 6};
    list<int> li;
    // 使用back_inserter
    unique_copy(vi.begin(), vi.end(), back_inserter(li));
    for(auto v:li)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}