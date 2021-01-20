// Exercise 3.36: Write a program to compare two arrays for equality. Write a similar
// program to compare two vectors.
// 比较两个数组是否相等，比较两个vector对象是否相等
// 假设vector对象的元素个数相等，只比较其中具体的元素

#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    const int sz = 5;
    vector<int> a, b;
    srand((unsigned)time(NULL));
    for (int i = 0; i < sz;i++)
    {
        a.push_back(rand() % 5);
    }
    cout << "please input 5 numbers:" << endl;
    int temp;
    for (int i = 0; i < sz;i++)
    {
        if(cin>>temp) // when cin is valid
        {
            b.push_back(temp);
        }
    }
    cout << "vector 1:" << endl;
    for(auto z:a)
    {
        cout << z << " ";
    }
    cout << endl;

    cout << "vector 2:" << endl;
    for(auto z:b)
    {
        cout << z << " ";
    }
    cout << endl;

    // get the pointers
    auto ita = a.cbegin(), itb = b.cbegin();
    auto enda = a.cend(), endb = b.cend();

    while(ita!=enda&&itb!=endb)
    {
        if(*ita!=*itb)
        {
            cout << "NOT EQUAL!" << endl;
            return -1;  // exit
        }
        ita++;
        itb++;
    }
    cout << "congratulations！" << endl;

    return 0;
}
