#include<iostream>

int main()
{
	int data, *pdata, arr[10];
	pdata = &data;
	std::cout << "sizeof(data):" << sizeof(data) << std::endl;
	std::cout << "sizeof(pdata):" << sizeof(pdata) << std::endl;
	std::cout << "sizeof(*pdata):" << sizeof(*pdata) << std::endl;
	std::cout << "sizeof(arr):" << sizeof(arr) << std::endl;
    
	return 0;    
}
