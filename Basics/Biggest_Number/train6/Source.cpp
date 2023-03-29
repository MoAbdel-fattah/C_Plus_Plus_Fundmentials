#include<iostream>
using namespace std;
int bignum(int num1, int  num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}
int main() {
	//int x = 100, y, z;prevnext(x, y, z);cout << "Previous=" << y <<endl<<"Next=" << z;return 0;
	int x, y;
	
	cout << "Enter Two Value"<<endl;
	cin >> x >> y;
	
	cout << "Big num= \n" << bignum(x,y) << endl ;
	return 0;

}
