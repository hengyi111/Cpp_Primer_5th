// Exercise 6.47: Revise the program you wrote in the exercises in § 6.3.2 (p. 228) that
// used recursion to print the contents of a vector to conditionally print information
// about its execution. For example, you might print the size of the vector on each call.
// Compile and run the program with debugging turned on and again with it turned off.

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> vInt,unsigned index)
{
    unsigned sz = vInt.size();
    // print the debug information in here
    #ifndef NDEBUG
    cout << "the size of vector is:" << sz << endl;
    #endif
    
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