#include <iostream>
using namespace std;
int main()
{
	const int i = 3, j = 3;

	int sum1,sum2,sum3,sum4;

	int arr[i][j] = { {1, 2, 3},
					 {4, 5, 6},
					 {7, 8, 9} };

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
			sum1 += arr[i][j];
	}
    cout << "sum1 = " << sum1 << " ";
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for
			(int j = 0; j < 3; j++)
			if (i + j == 2)
				sum2 += arr[i][j];
	}
	cout << "sum2 = " << sum2 << " \n "
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