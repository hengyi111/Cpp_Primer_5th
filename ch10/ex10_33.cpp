// Exercise 10.33: Write a program that takes the names of an input file and two output
// files. The input file should hold integers. Using an istream_iterator read the
// input file. Using ostream_iterators, write the odd numbers into the first output
// file. Each value should be followed by a space. Write the even numbers into the second
// file. Each of these values should be placed on a separate line.

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		cerr << "用法：ex10_33.cpp infile outfile1 outfile2" << endl;
		return -1;
	}
	ifstream in(argv[1]);
	if (!in)
	{
		cerr << "fail to open input file!" << endl;
		exit(1);
	}
	ofstream out1(argv[2]);
	if (!out1)
	{
		cerr << "fail to open output file1!" << endl;
		exit(1);
	}
	ofstream out2(argv[3]);
	if (!out2)
	{
		cerr << "fail to open output file2!" << endl;
		exit(1);
	}
	istream_iterator<int> in_iter(in);
	istream_iterator<int> eof;
	ostream_iterator<int> out_iter1(out1, " ");
	ostream_iterator<int> out_iter2(out2, "\t");

	while (in_iter != eof)
	{
		if (*in_iter & 1)
		{
            // 左侧不使用*和++，效果也一样的
			*out_iter1++ = *in_iter;  
		}
		else
		{
			*out_iter2++ = *in_iter;
		}
		++in_iter;
	}
	return 0;
}