// Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators.
// Exercise 3.20:Read a set of integers into a vector. Print the sum of each pair of
// adjacent elements. Change your program so that it prints the sum of the first and last
// elements, followed by the sum of the second and second-to-last, and so on.

#include<iostream>
#include<vector>

using namespace std;

int main1()
{
    int numbers;
    vector<int> v;
    cout << "please input a set of integers" << endl;
    while(cin>>numbers)
    {
        v.push_back(numbers);
    }
    if(v.cbegin()==v.cend())
    {
        cout << "no element" << endl;
        return -1;
    }
    for (auto it = v.cbegin(); it != v.cend() - 1;++it)
    {
        cout << *it + *(++it) << " ";
        if((it-v.cbegin()+1)%10==0)
        {
            cout << endl;
        }
    }
    if(v.size()%2==1)
    {
        cout << *(v.cend() - 1);
    }
    return 0;
}

// add the first and the last numbers
int main()
{
    int numbers;
    vector<int> v;
    cout << "please input a set of integers" << endl;
    while(cin>>numbers)
    {
        v.push_back(numbers);
    }
    if(v.cbegin()==v.cend())
    {
        cout << "no element" << endl;
        return -1;
    }
    auto begin = v.cbegin();
    auto end = v.cend();
    auto mid = begin + (end - begin) / 2;
    for (auto it = v.cbegin(); it != mid;++it)
    {
        cout << *it + *((end-1)-(it-begin)) << " ";
        if((it-v.cbegin()+1)%5==0)
        {
            cout << endl;
        }
    }
    // the remaining number is the mid
    if(v.size()%2==1)
    {
        cout << *mid;
    }
    return 0;
}
