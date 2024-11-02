#include <iostream>
using namespace std;
int main()
{
	int number1, number2;
	cout << "Enter First Number : ";
	cin >> number1;

	cout << " Enter Second Number : ";
	cin >> number2;

	if (number1 > number2)
	    cout << number1 << " > " << number2 << endl;
	else if (number1 == number2)
		cout << number1 << " = " << number2 << endl;
	else //if(number1 < number2)
		cout << number1 << " < " << number2 << endl;
}
    