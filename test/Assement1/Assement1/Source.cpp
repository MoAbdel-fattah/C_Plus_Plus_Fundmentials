#include <iostream>
using namespace std;
int main()
{
	const int i = 3, j = 3;
	int sumX = 0;
	int sum0 = 0;
	int arr1[3][3] = { 
		               {10,20,30},
		               {40,50,60},
		               {70,80,90} 
	                 };
	int sum[3][3];
	int arr[i][j] = { 
		             {1, 2, 3},
					 {4, 5, 6},
					 {7, 8, 9} 
	                };

	cout << "The First Array Is : \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
    }

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j) 
			sumX += arr[i][j];
		}
	}

		cout << "Left Slope Add Way = " << endl<<   sumX << endl;

	for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i + j == 2)
					sum0 += arr[i][j];
			}
		}

    	cout << "Right Slope Add Way = " << endl << sum0 <<endl;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				sum[i][j] = arr[i][j] + arr1[i][j];
			}
		}

		cout << "The Result Of Add Two Array Is: \n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << sum[i][j]<< " ";
		}
		cout << endl;
	}
	return 0;
}
	