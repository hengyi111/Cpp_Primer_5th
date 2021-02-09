// Exercise 7.4: Write a class named Person that represents the name and address of
// a person. Use a string to hold each of these elements. Subsequent exercises will
// incrementally add features to this class.

//Exercise 7.5: Provide operations in your Person class to return the name and address. Should these functions be const? Explain your choice.

#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <istream>
#include <string>

using namespace std;

class Person
{
    // ex7_9 start
    friend istream &read(istream &is, Person &per);
    friend ostream &print(ostream &os, const Person &per);
    // ex7_9 end

private:
    string strName;
    string strAddress;

public:
    string getName() const
    {
        return strName;
    }
    string getAddress() const
    {
        return strAddress;
    }

public:
    // ex7_15 start
    Person() = default;
    Person(const string &name, const string &add)
    {
        strName = name;
        strAddress = add;
    }
    // 这个还需要另外重载>>运算符
    Person(istream &is)
    {
        //is >> *this;
    }

    // ex7_15 start
};

// ex7_9 start
istream &read(istream &is, Person &per)
{
    is >> per.strName >> per.strAddress;
    return is;
}

ostream &print(ostream &os, const Person &per)
{
    os << per.getName() << per.getAddress();
    return os;
}
// ex7_9 end

#endif