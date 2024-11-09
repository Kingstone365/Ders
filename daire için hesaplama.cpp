#include <iostream>
#include <cfloat>
using namespace std;

const float PI = 3.14f;
int main()
{
	cout << "Please enter the raidus of circle:";
	float raidus;
	cin >> raidus;
	float diameter = 2 * raidus;
	float circumference = 2 * PI * raidus;
	float areaofcircle = PI * raidus * raidus;
	cout << "The diameter of the circle:" << diameter << endl;
	cout << "The circumference of the circle:" << circumference << endl;
	cout << "The area of the circle:" << areaofcircle << endl;
}