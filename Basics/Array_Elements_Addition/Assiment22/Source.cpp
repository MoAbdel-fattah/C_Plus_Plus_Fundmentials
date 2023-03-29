#include <iostream>
using namespace std;
int main()
{
	int sumA = 0; int sumB = 0;int sumC = 0;int sumD = 0;

	int arr[3][3] ={ {1, 2, 3},{4, 5, 6},{7, 8, 9} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++){cout << arr[i][j] << "\n";}
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
		for(int j = 0; j < 3; j++)
		if (i + j == 2)
		sumB += arr[i][j];
	}
	cout << "sumB = " << sumB << " \n ";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		if (i < j)
		sumC += arr[i][j];
	}
	cout << "sumC = " << sumC << " \n ";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		if (i > j)
	    sumD += arr[i][j];
	}
	cout << "sumD = " << sumD << " \n ";
	return 0;
}