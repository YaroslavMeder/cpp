#include <iostream>

using namespace std;

int sim_1_2()
{
	int a, b = 1;

	while (true)
	{	
		cin >> a;
		if (a != 0)
			b = a*b;
		else
			break;
	}

	return b;
}

int main()
{
	int n = sim_1_2();
		










	//double sum = 0;
	//cin >> n;
	////for (int i = 1; i <= n + 1; i++)
	////{
	////	//double t = ;
	////	sum +=  1.0f / (2 * i - 1)/ (2 * i - 1);
	////}

	//for (int i = 1; i <= 2 * n + 1; i += 2)
	//{
	//	sum += 1.0f / i / i;
	//}

	//cout << sum;




	return EXIT_SUCCESS;
}