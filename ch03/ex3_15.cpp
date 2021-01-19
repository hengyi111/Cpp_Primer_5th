//Exercise 3.15: Repeat the previous program but read strings this time

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v;
	string temp;
    char c = 'y';
    cout << "please input strings:" << endl;
	while(cin>>temp)
	{
		v.push_back(temp);
        cout << "continue?y or n" << endl;
        cin >> c;
        if(c!='y')
        {
            break;
        }
    }
    for(auto e:v)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}