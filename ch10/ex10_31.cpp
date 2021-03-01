// Exercise 10.31: Update the program from the previous exercise so that it prints only
// the unique elements. Your program should use unqiue_copy (§ 10.4.1, p. 403).

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
    unique_copy(vi.begin(), vi.end(), out_iter);
    return 0;
}