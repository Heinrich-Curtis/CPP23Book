//Instantiating literals of the fundamental data types using uniform initialization
//import std; We can't use this yet becuase gcc suport isn't complete, this pre-compiled module isn't available yet
#include <iostream>
using std::cout; using std::endl;

int main()
{
	//integral types
	int a{1};
	int b{-1};
	//int c {-1u}; //what does this do? Ohh, we get a narrowing conversion. -1 u is evaluated as 2^32 -1, then we get the narrowing conversion becasue its out of range of int

	int d{1u};
	long e{123u};

	//octal numbers
	int f{017}; //decimal 15? Yep , decimal 15 by default, have to specify the output format if we want otherwise
	cout << "Ocatal with supplied literal 017: " << f << std::endl;
	long long g{10'000UL};
	cout << "unsigned long with apostrophe separator: " << g <<std::endl;
	int h{0x1A};
	int i{0b0110};
	cout << "Hex 1A: " << h << ", binary 0110: " << i <<std::endl;
	return 0;
}
