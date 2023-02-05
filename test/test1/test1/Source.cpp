#include <iostream>
using namespace std;
int main(){
	int x;
	cout << "Enter Any Number \n";
	cin >> x;
	if      ((x >= 0) && (x % 2==0))
		cout << "Number Is Postive Even \n";
	else if ((x <= 0) && (x % 2 !=0))
		cout << "Number Is Nagtive Even \n";
	else if ((x >= 0) && (x % 2 !=0))
		cout << "Number Is Postive Odd  \n";
	else if ((x <= 0) && (x % 2 !=0))
		cout << "Number Is Nagtive Odd  \n";
	else
		cout << "Enter Vaild Number \n";
    return 0;}
