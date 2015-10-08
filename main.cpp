#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double v1, v2;
	cout << "Enter your first vector:" << endl;
	cin >> v1;

	cout << "Enter your second vector:" << endl;
	cin >> v2;

	cout << "The magnitude of the vector is:" << sqrt(pow(v1, 2) + pow(v2, 2)) << endl;
	
	return 0;


}
