/*
Exercise 3.2: Write a program to read the standard input a line at a time. Modify your
program to read a word at a time.
*/
//this program input a entire line
#include<string>
#include<iostream>
int main()
{
	std::string inputline="";
	while(std::getline(std::cin, inputline))
		std::cout << inputline << std::endl;
	return 0;
}
