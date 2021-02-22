// Exercise 9.4: Write a function that takes a pair of iterators to a vector<int> and an
// int value. Look for that value in the range and return a bool indicating whether it
// was found.

#include<vector>
#include<iostream>

using namespace std;

bool search_vec(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    while(beg!=end)
    {
        if(*beg==val)
        {
            return true;
        }
        ++beg;
    }
    return false;

} 

int main()
{
    vector<int> list1 = {1, 2, 3, 4, 5, 6, 7};
    cout << search_vec(list1.begin(), list1.end(), 3) << endl;
    cout << search_vec(list1.begin(), list1.end(), 8) << endl;
    return 0;
}