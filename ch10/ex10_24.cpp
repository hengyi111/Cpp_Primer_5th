// Exercise 10.24: Use bind and check_size to find the first element in a vector of
// ints that has a value greater than the length of a specified string value.

#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() <= sz;
}

void biggies(vector<int> &vc, const string &s)
{
    auto p = find_if(vc.begin(), vc.end(), bind(check_size, s, _1));
    cout << p - vc.begin() + 1 << ": " << *p << endl;
}


int main()
{
    vector<int> vc = {1, 2, 3, 4, 5, 6, 7};
    biggies(vc, "Hello");
    biggies(vc, "!");
    biggies(vc, "ni");
    return 0;
}