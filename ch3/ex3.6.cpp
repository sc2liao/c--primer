/*
Use a range for to change all the characters in a string to X
*/

#include<string>
#include<iostream>

int main()
{
	std::string str = "hello word";
	for(char &x : str)
	{
		x = toupper(x);
	}
	std::cout << str << std::endl;
	return 0;
}
