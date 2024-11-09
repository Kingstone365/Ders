#include <iostream>
using namespace std;
int main()
{
	int number1, number2;
	cout << "Enter first integer : ";
	cin >> number1;

	cout << "Enter second İnteger : ";
	cin >> number2;

	int sum;
	sum = number1 + number2;
	cout << endl << "Sum of integers:" << sum << endl << endl;
	int difference;
	difference = number1 - number2;
	cout << "Difference of integers:" << difference << endl << endl;
	float average;
	average = (static_cast<float>(number1) + number2) / 2;
	cout << "Average of integers:" << average << endl << endl;
	int product;
	product = number1 * number2;
	cout << "Product of integers:" << product << endl << endl;
	float division;
	division = (static_cast<float> (number1) / number2);
    cout << "Division of integers:" << division << endl << endl;
	

}
    