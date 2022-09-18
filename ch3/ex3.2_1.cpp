#include<string>
#include<iostream>
int main()
{
	std::string inputline="";
	while(std::getline(std::cin, inputline))
		std::cout << inputline << std::endl;
	return 0;
}
