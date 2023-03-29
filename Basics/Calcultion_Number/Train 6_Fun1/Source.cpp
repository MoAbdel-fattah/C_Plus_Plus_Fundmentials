#include <iostream>
using namespace std;
unsigned long Factorial(int n) {
	if (n > 1)
		return n * Factorial(n - 1);
	else
		return 1;
}
int main() {
	int n;
	cout << "Enter Number :";
	cin >> n;
	cout << "Factorial=" << endl << Factorial(n);
	return 0;
}