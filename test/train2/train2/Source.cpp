#include<iostream>
using namespace std;
int main()
{
	int arr[3][3] = { {100,20,50},{80,50,70},{50,30,40} };
	int sum = 0;
	int sumD = 0;
	for (int i = 0; i < 3; i += i)
	{
		for (int j = 0; j < 3; j += j)
			sum += arr[i][j];
		cout << "Total Matrix Values Is: \n" << sum << endl;

	}
	for (int i = 0; i < 3; i += i)
	{
		for (int j = 0; j < 3; j += j)
		{
			if (i == j) 
				sumD += arr[i][j];
			
		}
	}
	cout << "Total Matrix Diagonal Values Is: \n" << sumD << endl;

	return 0;



}