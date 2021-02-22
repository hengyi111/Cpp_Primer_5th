// Exercise 9.5: Rewrite the previous program to return an iterator to the requested element. Note that the program must handle the case where the element is not found.

#include<vector>
#include<iostream>

using namespace std;

vector<int>::iterator search_vec(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    while(beg!=end)
    {
        if(*beg==val)
        {
            return beg;  
        }
        ++beg;  
    }
    return end;//if not found,return off the end iterator

} 

int main()
{
    vector<int> list1 = {1, 2, 3, 4, 5, 6, 7};
    cout << search_vec(list1.begin(), list1.end(), 3)-list1.begin() << endl;
    cout << search_vec(list1.begin(), list1.end(), 8)-list1.begin()  << endl;
    return 0;
}