#include<iostream>
using namespace std;
int x(int n, int m) {
	return n * m;
}
double x(double n, int m) {
	return n - m;
}
int main() {
	cout << "Value=" << x (5  , 2) << endl;
	cout << "Value=" << x (2.5, 8) << endl;
	return 0;
}