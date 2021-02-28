// Exercise 10.3: Use accumulate to sum the elements in a vector<int>.

#include<numeric>
#include<vector>
#include<iostream>

using namespace std;
int main()
{
    vector<int> vi = {1, 2, 3, 4, 5};
    // accumulate ————#include<numeric>
    int out = accumulate(vi.cbegin(), vi.cend(), 0);
    cout << "the out is: " << out << endl;

    return 0;
}