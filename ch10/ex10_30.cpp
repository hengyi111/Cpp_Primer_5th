// Exercise 10.30: Use stream iterators, sort, and copy to read a sequence of integers
// from the standard input, sort them, and then write them back to the standard output.

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    istream_iterator<int> in_iter(cin);
    istream_iterator<int> eof;
    vector<int> vi;
    while(in_iter!=eof)
    {
        vi.push_back(*in_iter++);
    }
    sort(vi.begin(), vi.end());
    ostream_iterator<int> out_iter(cout, " ");
    // 用copy的方式放到out_iter中来输出
    copy(vi.begin(), vi.end(), out_iter);
    return 0;
}