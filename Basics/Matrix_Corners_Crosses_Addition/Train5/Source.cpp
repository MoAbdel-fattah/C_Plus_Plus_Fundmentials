#include <iostream>
using namespace std;
int main()
{
	int sumA = 0;
	int sumB = 0;
	int sumC = 0;
	int sumD = 0;
	int sumE = 0;
	int sumF = 0;
	//1-[0,0],2-[0,1],3-[0,1]
	int Array[3][3] =
	{
	{1 , 2 , 3 },
	{4 , 5 , 6 },
	{7 , 8 , 9 }
	};
	int Array1[3][3] =
	{
	{10 , 11 , 12 },
	{13 , 14 , 15 },
	{16 , 17 , 18 }
	};
	int sumArray[3][3];
	// Add Right Diagonal
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			if (i == j)
				sumA += Array[i][j];
	}
	cout << "sumA = " << sumA << " \n ";
	// Add left Diagonal
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			if (i + j == 2)
				sumB = sumB + Array[i][j];
	}
	cout << "sumB = " << sumB << " \n ";
	// Add upper right Triangle values
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			if (i < j)
				sumC += Array[i][j];
	}
	cout << "sumC = " << sumC << " \n ";

	//Add lower left Triangle values
    for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			if (i > j)
				sumD += Array[i][j];
	}
	cout << "sumD = " << sumD << " \n ";

	//Add Upper Right Triangle values and Lower left Triangle Values
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		//if (i!=j)
			if ((i > j) || (i<j))
				sumE += Array[i][j];
	}
	cout << "sumE = " << sumE << " \n ";
	cout << endl;

	//Add two Matrix
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			sumArray[i][j] = Array[i][j] + Array1[i][j];
	}

	//Print The Result of Adding two Matrix
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << sumArray[i][j] << " " ;
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << sumArray[i][j] << " ";
		}
		cout << endl;


	return 0;
}