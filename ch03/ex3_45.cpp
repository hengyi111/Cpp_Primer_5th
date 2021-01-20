// Exercise 3.45: Rewrite the programs again, this time using auto.

#include<iostream>

using namespace std;

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // 1. range for
    cout << "range for:" << endl;
    for(auto &row:ia)
    {
        for(auto &col:row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << "---------------" << endl;

    // 2.for
    cout << "2 for:" << endl;
    for (auto i = 0; i != sizeof(ia)/sizeof(ia[0]);i++)
    {
        for (auto j = 0; j != sizeof(ia[0])/sizeof(ia[0][0]);j++)
        {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------" << endl;

    // 3. for and pointer
    cout << "3 for and pointer:" << endl;
    for (auto p = ia; p != ia + 3;p++)  // 原始是一个指向指针的指针
    {
        for (auto q = *p; q != *p + 4;q++)
        {
            cout << *q << " ";
        }
        cout << endl;
    }
    return 0;
}