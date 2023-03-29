#include <iostream>
using namespace std;
//int sum (int num1, int num2);int sum1(int num3, int num4);int sum2(int num5, int num6);int sum3(int num7, int num8);
float area(float r);
int main() {
	float rad;
	//int x, y;
	cout << "Enter Half Radius" << endl;
	cin  >>  rad;
	cout << "area = " << area(rad) << endl;
	//cin >> y >> x;if (x<y)cout << "SumAdd ="  << sum (x, y) << endl;cout << "SumSub ="  << sum1(x, y) << endl;cout << "SumMulti ="<< sum2(x, y) << endl;cout << "SumDev ="  << sum3(x, y) << endl;
	return 0;
}
//int sum(int num1, int num2) {return num1 + num2;}int sum1(int num3, int num4) {return num3 - num4;}int sum2(int num5, int num6) {return num5 * num6;}int sum3(int num7, int num8) {return num7 / num8;}
float area(float r) {
	const float Pi = 3.14;
	return Pi * r * r;
}