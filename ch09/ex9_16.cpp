// Exercise 9.16: Repeat the previous program, but compare elements in a list<int>
// to a vector<int>.

#include<iostream>
#include<list>
#include<vector>

using namespace std;

bool l_v_equal(list<int> &ilist,vector<int> &ivec)
{
    if(ilist.size()!=ivec.size())
    {
        return false;
    }
    auto lbegin = ilist.cbegin();
    auto lend = ilist.cend();
    auto vbegin = ivec.cbegin();
    for (; lbegin != lend; ++lbegin,++vbegin)
    {
        if(*lbegin!=*vbegin)
        {
            return false;
        }

    }
    return true;
}

int main()
{
    vector<int> ivec = {1, 2, 3};
    list<int> list1 = {1, 2, 3};
    list<int> list2 = {1, 2, 3, 4};
    cout << l_v_equal(list1, ivec) << endl;
    cout << l_v_equal(list2, ivec) << endl;
    return 0;
}