// Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of
// adjacent elements. Change your program so that it prints the sum of the first and last
// elements, followed by the sum of the second and second-to-last, and so on.

#include <iostream>
#include <vector>

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
    if(v.empty())
    {
        cout << "no element" << endl;
        return -1;
    }
    for (decltype(v.size()) i = 0; i < v.size()-1;i+=2)
    {
        cout << v[i] + v[i + 1] << " ";
        // 5 pairs as one line
        if(i%10==9)
        {
            cout << endl;
        }
    }

    if(v.size()%2==1)  // if the size is odd,the last one is alone
    {
        cout << v[v.size() - 1];
    }

    return 0;
}

int main()
{
    int numbers;
    vector<int> v;
    cout << "please input a set of integers" << endl;
    while(cin>>numbers)
    {
        v.push_back(numbers);
    }
    if(v.empty())
    {
        cout << "no element" << endl;
        return -1;
    }
    for (decltype(v.size()) i = 0; i < v.size()/2;++i)
    {
        cout << v[i] + v[v.size()-1-i] << " ";
        // 5 pairs as one line
        if(i%5==4)
        {
            cout << endl;
        }
    }

    if(v.size()%2==1)  // if the size is odd,the last one is alone
    {
        cout << v[v.size()/2];
    }

    return 0;
}