// Exercise 5.14: Write a program to read strings from standard input looking for duplicated words. The program should find places in the input where one word is followed immediately by itself. Keep track of the largest number of times a single repetition occurs and which word is repeated. Print the maximum number of duplicates, or
// else print a message saying that no word was repeated. For example, if the input is
// how now now now brown cow cow
// the output should indicate that the word now occurred three times.

#include<iostream>
#include<string>

using namespace std;
int main()
{
    // 只出现一次不算，至少要出现两次
    unsigned count=1,max_count = 1;  
    string ch, prech="";
    string max_string;

    while(cin>>ch)
    {
        if(ch==prech)
        {
            ++count;
            if(count>max_count)
            {
                max_count = count;
                max_string = ch;
            }
        }
        else
        {
            count = 1;
        }
        // 更新prech，供下一次循环使用
        prech = ch;
    }
    if(max_count<2)
    {
        cout << "NO!" << endl;
    }
    else
    {
        cout << max_string<<": " << max_count << endl;
    }

    return 0;
}