// Exercise 11.33: Implement your own version of the word-transformation program.

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>

using namespace std;

map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map;
    string key;
    string value;
    // read the first word into key and the rest of the line into value
    while (map_file >> key && getline(map_file, value))
    {
        if (value.size() > 1) // check that there is a transformation
        {
            trans_map[key] = value.substr(1); // skip leading space
        }
        else
        {
            throw runtime_error("no rule for" + key);
        }
    }
    return trans_map;
}

const string &transform(const string &s, const map<string, string> &m)
{
    // the actual map work; this part is the heart of the program
    auto map_it = m.find(s);
    // if this word is in the transformation map
    if (map_it != m.cend())
        return map_it->second; // use the replacement word
    else
        return s; // otherwise return the original unchanged
}

// 这个函数要放在最后面，因为其使用了前面两个函数，否则就需要提前声明前面两函数
void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file); // store the transformations
    string text;                         // hold each line from the input
    while (getline(input, text))
    {
        istringstream stream(text); // read each word
        string word;
        bool firstword = true; // controls whether a space is printed
        while (stream >> word)
        {
            if (firstword)
            {
                firstword = false;
            }
            else
            {
                cout << " "; // print a space between words
            }
            cout << transform(word, trans_map);
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        throw runtime_error("wrong number of arguments");
    }
    ifstream map_file(argv[1]);
    if (!map_file)
    {
        throw runtime_error("no transformation file");
    }
    ifstream input(argv[2]);
    if (!input)
    {
        throw runtime_error("no input file");
    }
    word_transform(map_file, input);
    return 0;
}