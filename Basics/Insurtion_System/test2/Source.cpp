#include <iostream>
using namespace std;
int main()
{
	int marital, gender;
	int age;
	cout << "Enter 1 For Single and 2 For Married \n";
	cin >> marital;
	if (marital != 2)
		goto step2;
	if (marital == 2)
		goto step1;

step1:
	if (marital == 2);
	cout << "Your Are Insured";
	goto final;
step2:
	cin >> marital;
	cout << "Enter 1 For Male and 2 For Female \n";
	cin >> gender;
	cout << "Enter Your Age\n";
	cin >> age;

	if ((marital == 1) && ((gender == 1) && (age >= 30)) || ((gender == 2) && (age >= 25))) 
		cout << "Your Are Insured";
	else
	return 0;
	final:
	return 0;
}









	//cout << "Are You Married ? \n";
	//cin  >> marital;
	//if (marital == 'Yes')
		//cout << ("Your Are Insured \n");
	//else  
		//(marital == 'No');			
		//cout << "For Male Enter 1 And For Female Enter 2\n";
		//cin >> gender;
		 //if ((gender != 1) || (gender != 2))
			//cout << "Please Enter 1 For Males Or 2 For Female \n";
		  //else
			//if ((gender == 1) || (gender == 2));
		  //cout << "How Old Are You? \n";
		  //cin >> age;
//if ((gender == '1') && (age >= 30));
	//	   cout << ("Your Are Insured \n");
		//   if ((gender != 1));
		//if ((gender == '2') && (age >= 25));
		//cout << ("Your Are Insured \n");
	 