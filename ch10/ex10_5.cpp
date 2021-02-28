// Exercise 10.5: In the call to equal on rosters, what would happen if both rosters held
// C-style strings, rather than library strings?
#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    char *p[] = {"ni", "hao"};
    // strdup  #include<string.h>
    char *q[] = {strdup(p[0]), strdup(p[1])};
    char *r[] = {p[0], p[1]};
    cout << equal(begin(p), end(p), q) << endl;
    cout << equal(begin(p), end(p), r) << endl;

    return 0;
}