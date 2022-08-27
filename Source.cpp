#include<iostream>
#include<string>

using namespace std;

int main() {
	cout << "--------C++ Strings---------\n";
	string s1;
	string s2{ "Ethan" };
	string s3{ s2 };
	cout << s2 + " " + s3 << endl;

	string s4{ "Ethan", 4 };
	string s5{ s3, 0 , 2 };
	string s6{ 3, 'x' };
	cout << s4 + " " + s5 + " " + s6 << "\n"; //string s6 outputs a heart...dunno why maybe junk data. I like it so i'm keeping it.
	cout << endl;
	
	cout << "----Putting Strings together----\n";
	string part1{ "C++" };
	string part2{ "is a cool" };

	string phrase;
	phrase = part1 + " " + part2 + " language";
	cout << phrase << endl;
	cout << endl;

	cout << "----Accessing C++ Strings----\n";
	cout << s2[0] << endl;
	cout << s2.at(1) << endl;
	
	s2.at(0) = '3';

	cout << s2 << endl;
	cout << endl;

	cout << "---C++ find()---\n";
	string f1{ "This is a find" };

	cout << f1.find("find") << endl;
	cout << f1.find("This") << endl;
	cout << f1.find("is") << endl;
	cout << f1.find("SS") << endl;	//string::npos but instead you get a bunch of numbers? I assume this is the error on this IDE in C++.


	cout << endl;
}