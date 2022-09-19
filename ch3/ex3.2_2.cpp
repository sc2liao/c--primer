/*
Exercise 3.2: Write a program to read the standard input a line at a time. Modify your
program to read a word at a time.
*/
//this program is input a word
#include<string>
#include<iostream>

int main()
{
	std::string inputword;
	while(std::cin >> inputword)
		std::cout << inputword << std::endl;
	return 0;
}
