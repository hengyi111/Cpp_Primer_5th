// Exercise 3.42: Write a program to copy a vector of ints into an array of ints.

#include<iostream>
#include<vector>
#include<ctime>

using namespace std;

int main()
{
    const int sz = 10;
    vector<int> v;
    srand((unsigned)time(NULL));
    cout << "vector is:" << endl;
    for (int i = 0; i != sz;i++)
    {
        v.push_back(rand() % 10);
        cout << v[i] << " ";
    }
    cout << endl;

    int a[v.size()];
    auto it = v.begin();
    cout << "array is:" << endl;
    for(auto &val:a)
    {
        val = *it;
        cout << val << " ";
        it++;
    }
    cout<<endl;
    return 0;
}