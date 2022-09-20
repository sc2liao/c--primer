/*
Write a program to read two strings and report whether the strings
are equal. If not, report which of the two is larger. Now, change the program to report
whether the strings have the same length, and if not, report which is longer
*/
#include<iostream>
#include<string>

int main()
{
	std::string str1;
	std::string str2;
	std::cin >> str1 >> str2;
	if(str1 == str2)
		std::cout << "str1 is equal str2";
	else
		std::cout << "longer str is" <<  str1 > str2 ? str1 : str2;
}
