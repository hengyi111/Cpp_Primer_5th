// Exercise 5.17: Given two vectors of ints, write a program to determine whether
// one vector is a prefix of the other. For vectors of unequal length, compare the number of elements of the smaller vector. For example, given the vectors containing 0,
// 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true.

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1 = {0, 1, 1, 2};
    vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
    vector<int> v3 = {3, 5, 8};
    vector<int> v4 = {3, 5, 0, 9, 2, 7};

    auto it1 = v1.cbegin();
    auto it2 = v2.cbegin();

    while(it1!=v1.cend()&&it2!=v2.cend())
    {
        if(*it1!=*it2)
        {
            cout << "error!" << endl;
            break;
        }
        ++it1;
        ++it2;
    }
    // 判断循环结束的指针指向的位置
    if(it1 ==v1.cend())
    {
        cout << "v1 is the prefix of v2" << endl;
    }
    if(it2 ==v2.cend())
    {
        cout << "v2 is the prefix of v1" << endl;
    }

    return 0;
}