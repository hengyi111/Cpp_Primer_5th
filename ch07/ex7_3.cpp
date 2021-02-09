// Exercise 7.3: Revise your transaction-processing program from § 7.1.1 (p. 256) to use
// these members.

#include<iostream>
#include "Sales_data.h"
using namespace std;

int main()
{
    cout << "please input isbn,units_sold,price,sale_price:" << endl;
    Sales_data total;
    if(cin>>total)
    {
        Sales_data trans;
        while(cin>>trans)
        {
            if(total.isbn()==trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                cout << total << endl;
                total = trans;
            }
            
        }
        cout << total <<endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}