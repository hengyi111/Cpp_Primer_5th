// Exercise 7.7: Rewrite the transaction-processing program you wrote for the exercises
// in § 7.1.2 (p. 260) to use these new functions

#include<iostream>
#include "Sales_data.h"
using namespace std;

int main()
{
    cout << "please input isbn,units_sold,price,sale_price:" << endl;
    Sales_data total;
    if(read(cin,total))
    {
        Sales_data trans;
        while(read(cin,trans))
        {
            if(total.isbn()==trans.isbn())
            {
                total = add(total, trans);
            }
            else
            {
                print(cout, total);
                cout << endl;
                total = trans;
            }
            
        }
        print(cout, total);
        cout << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}