// Exercise 6.33: Write a recursive function to print the contents of a vector
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> vInt,unsigned index)
{
    unsigned sz = vInt.size();
    if(!vInt.empty()&&index<sz)
    {
        cout << vInt[index] <<endl;
        print(vInt, index + 1);// 每次传入下一个索引
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(v, 0);

    return 0;
}