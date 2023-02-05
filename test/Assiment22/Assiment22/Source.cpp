#include <iostream>
using namespace std;
int main()
{
	int sumA = 0;
	int sumB = 0;
	int sumC = 0;
	int sumD = 0;

	int arr[3][3] = { 
		             {1, 2, 3},
					 {4, 5, 6},
					 {7, 8, 9} 
	                 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		cout << arr[i][j] << "\n";
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			if (i == j)
				sumA += arr[i][j];
	}
	cout << "sumA = " << sumA << " ";
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for
			(int j = 0; j < 3; j++)
			if (i + j == 2)
				sumB += arr[i][j];
	}
	cout << "sumB = " << sumB << " \n "
		;
	for
		(int i = 0; i < 3; i++)
	{
		for
			(int j = 0; j < 3; j++)
			if (i < j)
				sum3 += arr[i][j];
	}
	cout << "sum3 = " << sum3 << " \n "
		;
	for
		(int i = 0; i < 3; i++)
	{
		for
			(int j = 0; j < 3; j++)
			if (i > j)
				sum4 += arr[i][j];
	}
	cout << "sum4 = " << sum4 << " \n "
		;


	return 0;
}