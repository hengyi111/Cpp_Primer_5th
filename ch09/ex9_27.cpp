// Exercise 9.27: Write a program to find and remove the odd-valued elements in a
// forward_list<int>.

#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
    forward_list<int> list1 = {1, 2, 3, 4, 5, 6, 7, 8};
    auto prev = list1.before_begin();
    auto curr = list1.begin();
    while (curr != list1.end())
    {
        if (*curr & 1)
        {
            curr = list1.erase_after(prev);
        }
        else
        {
            prev = curr;
            ++curr;
        }
    }
    for (auto v : list1)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}