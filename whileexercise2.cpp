#include <iostream>
int main()
{
	int v1 = 0, v2 = 0;
	int r1 = 0, r2 = 0;
	std::cin >> v1 >> v2;
	if (v1 > v2)
	{
		r1 = v2;
		r2 = v1;
	}
	else
	{
		r1 = v1;
		r2 = v2;
	}
	std::cout << "The numbers between " << r1 << " and " << r2 << " are:";
	while (r1 <= r2)	{
		++r1;
		std::cout << r1 << " ";
	}	
	std::cout << std::endl;
	return 0;
}