// Exercise 7.43: Assume we have a class named NoDefault that has a constructor that
// takes an int, but has no default constructor. Define a class C that has a member of
// type NoDefault. Define the default constructor for C.

#include <iostream>
#include <string>
using namespace std;

// 该类没有显式定义默认构造函数，编译器也不会为他合成一个
class NoDefault
{
public:
    NoDefault(int i)
    {
        val = i;
    }
    int val;
};

class C
{
public:
    // 创建NoDefault的对象
    NoDefault nd;
    // 必须显式调用Nodefault的带参构造函数来初始化nd
    C(int i = 0) : nd(i) {}  // 这个也是一个默认构造函数，但是带参数
};

int main()
{
    C c;
    cout << c.nd.val << endl;
    return 0;
}