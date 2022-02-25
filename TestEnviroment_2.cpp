#include <iostream>
using namespace std;
#include <cmath>;

//The main function is a bit problematic.. 
// Because it wont let me use any other name for the function
// Exp the 'main' name
int main() {
	int sum1 = 100 + 50;
	int sum2 = 200 + 60;
	int sum3 = 300 + 70;
	int sum4 = 400 + 80;

	int sumFor = sum1 + sum2;
	int sumForAnother = sum3 + sum4;

	int sumForsum = sumFor + sumForAnother;

	cout << sum1 << "\n";
	cout << sum2 << "\n";
	cout << sum3 << "\n";
	cout << sum4 << "\n";

	cout << sumFor << "\n";
	cout << sumForAnother << "\n";
	cout << sumForsum << "\n";

	return 0;

}
