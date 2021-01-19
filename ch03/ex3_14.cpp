//Exercise 3.14: Write a program to read a sequence of ints from cin and store those
//values in a vector.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int temp;
    char c = 'y';
    cout << "please input ints numbers:" << endl;
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