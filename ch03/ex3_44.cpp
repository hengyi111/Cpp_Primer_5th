// Exercise 3.44: Rewrite the programs from the previous exercises using a type alias for
// the type of the loop control variables.

#include<iostream>

using namespace std;
using int_array = int[4];  // type alias

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // 1. range for
    cout << "1 range for:" << endl;
    for(int_array &row:ia)  // row是一个数组的引用，该数组有4个元素
    {
        for(int &col:row)  // col就是int的引用了
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
    for (int_array *p = ia; p != ia + 3;p++)  // 原始是一个指向指针的指针
    {
        for (int *q = *p; q != *p + 4;q++)
        {
            cout << *q << " ";
        }
        cout << endl;
    }
    return 0;
}