#include<iostream>
using namespace std;
int main()
{
	int degree;
	cout << "Please Enter Degree \n";
	cin  >> degree;
	if (degree >= 85)
		cout << "Excellent \n";
	else if (degree >=75)
		cout << "Very Good \n";
	else if (degree >= 65)
		cout << "Good \n";
	else if (degree >= 50)
		cout << "Passed \n";
	else
		cout << "Failed \n";











}