// Exercise 12.26: Rewrite the program on page 481 using an allocator.

#include <iostream>
#include <memory>
#include <string>

using namespace std;
int main()
{
    allocator<string> alloc;
    //只分配裸内存
    auto const p = alloc.allocate(100);
    string s;
    // 得到双地址指针
    string *q = p;
    // 读入数据，不能超过100个
    while (cin >> s && q != p + 100)
    {
        alloc.construct(q++, s);  // 将q指向s，然后q递增
    }
    const size_t size = q - p;  // 计算出存入的长度
    for (size_t i = 0; i < size; ++i)
    {
        cout << p[i] << " " ;  // 输出
    }
    cout << endl;
    // 销毁
    while (q != p)
    {
        alloc.destroy(--q);
    }
    alloc.deallocate(p, 100);  // 释放内存
}