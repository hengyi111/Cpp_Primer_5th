// Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104) 
// using iterators instead of subscripts.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<unsigned> v(11,0);
    auto it = v.begin();
    int val;
    cout << "please input scores(0-100):" << endl;
    while(cin>>val)
    {
        if(val<101)
        {
            ++(*(it + val / 10));  // the core codes
        }
    }
    for(auto score:v)
    {
        cout << score << " ";
    }
    cout << endl;
    return 0;
}