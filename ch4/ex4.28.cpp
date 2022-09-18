#include<iostream>

int main()
{
	int data, *pdata, arr[10];
	char chr, *pchr, chrarr[10];
	bool boolean, *pboolean, booleanarr[10];
	double doub, *pdoub, doubarr[10];
	float f, *pf, farr[10];
	pdata = &data;
	pchr = &chr;
	pboolean = &boolean;
	pdoub = &doub;
	pf = &f;
	std::cout << "sizeof(data):" << sizeof(data) << std::endl;
	std::cout << "sizeof(pdata):" << sizeof(pdata) << std::endl;
	std::cout << "sizeof(*pdata):" << sizeof(*pdata) << std::endl;
	std::cout << "sizeof(arr):" << sizeof(arr) << std::endl;

	std::cout << "sizeof(chr):" << sizeof(chr) << std::endl;
	std::cout << "sizeof(pchr):" << sizeof(pchr) << std::endl;
	std::cout << "sizeof(*pchr):" << sizeof(*pchr) << std::endl;
	std::cout << "sizeof(chrarr):" << sizeof(chrarr) << std::endl;

	std::cout << "sizeof(boolean):" << sizeof(boolean) << std::endl;
	std::cout << "sizeof(pboolean):" << sizeof(pboolean) << std::endl;
	std::cout << "sizeof(*pboolean):" << sizeof(*pboolean) << std::endl;
	std::cout << "sizeof(booleanarr):" << sizeof(booleanarr) << std::endl;
    
	return 0;    
}
