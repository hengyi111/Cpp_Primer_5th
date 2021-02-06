// Exercise 6.22: Write a function to swap two int pointers

#include<iostream>
using namespace std;

//实际上没有交换
void swap1(int *p,int *q)
{
    int *temp = p;
    p = q;
    q = temp;
}

//交换指针内容
void swap2(int *p,int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

//交换指针本身的地址
void swap3(int *&p,int *&q)
{
    int *temp = p;
    p = q;
    q = temp;
}

int main()
{
    int a = 10, b = 5;
    int *p = &a, *q = &b;
    swap1(p, q);
    cout << *p << " " << *q << endl;

    a = 10, b = 5;
    p = &a, q = &b;
    swap2(p, q);
    cout << *p << " " << *q << endl;

    a = 10, b = 5;
    p = &a, q = &b;
    swap3(p, q);
    cout << *p << " " << *q << endl;


}