// Exercise 3.43: Write three different versions of a program to print the elements of ia.
// One version should use a range for to manage the iteration, the other two should use
// an ordinary for loop in one case using subscripts and in the other using pointers. In
// all three programs write all the types directly. That is, do not use a type alias, auto, or
// decltype to simplify the code.

#include<iostream>

using namespace std;

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // 1. range for
    cout << "1 range for:" << endl;
    for(int (&row)[4]:ia)  // row是一个数组的引用，该数组有4个元素
    {
        for(auto &col:row)  // col就是int的引用了
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << "---------------" << endl;

    // 2.for
    cout << "2 for:" << endl;
    for (int i = 0; i != sizeof(ia)/sizeof(ia[0]);i++)
    {
        for (int j = 0; j != sizeof(ia[0])/sizeof(ia[0][0]);j++)
        {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------" << endl;

    // 3. for and pointer
    cout << "3 for and pointer:" << endl;
    for (int (*p)[4] = ia; p != ia + 3;p++)  // 原始是一个指向指针的指针
    {
        for (int *q = *p; q != *p + 4;q++)
        {
            cout << *q << " ";
        }
        cout << endl;
    }
    return 0;
}