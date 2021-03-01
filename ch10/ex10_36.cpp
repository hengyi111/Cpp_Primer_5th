// Exercise 10.36: Use find to find the last element in a list of ints with value 0.

#include <algorithm>
#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int> L = {0, 1, 2, 0, 3, 4, 5, 0, 6};
    // 返回的是迭代器
    auto last_z = find(L.rbegin(), L.rend(), 0);
    //将last_z向链表头的方向移动一个位置，将其转换为普通迭代器之后，将回到正常的位置
    // 也即调用base，会使迭代器向右移动一位
    ++last_z;
    int p = 1;  // 记录位置
    for (auto iter = L.begin(); iter != last_z.base(); ++iter)
    {
        ++p;
    }
    if (p >= (int)L.size())
    {
        cout << "容器中没有0" << endl;
    }
    else
    {
        cout << "最后一个0在位置：" << p << endl;
    }

    return 0;
}