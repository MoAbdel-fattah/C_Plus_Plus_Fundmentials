#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int Total = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Enter Value index of" << i << ":";
		cin >> arr[i];
	}
	cout << "The Values Of Your Array is:\n";
	for (int i = 0; i < 5; i++) {
		cout << arr[i];
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		Total += arr[i];
	}
	cout << "Total Value Of Array is " << endl << Total << " ";
	cout << endl;
	cout << "Even Values In Your Array is \n";
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2== 0)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	cout << "Odd Values In Your Array is \n";
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 != 0)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
		
			
	
	return 0;

}
