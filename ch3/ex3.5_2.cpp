/*
Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change
the program to separate adjacent input strings by a space
*/

#include<iostream>
#include<string>

int main()
{
	std::string str;
	while(std::cin >> str)
	{
		std::cout << str;
	}
	return 0;
}
