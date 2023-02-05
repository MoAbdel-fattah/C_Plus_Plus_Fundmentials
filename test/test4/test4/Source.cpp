#include<iostream>
using namespace std;
int main()
{
	int x = 1;
	//while (x <= 10)
	for(x=1;x<=10;x++)
	{
		for (x += x; x <= 10; x++)
			
			cout << x //<< "is even \n";
		//else
			//cout << x << "is odd \n";
		//x++;

	}
}