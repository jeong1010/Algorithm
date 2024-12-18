#include <iostream>
using namespace std;
int main() {
	cout << fixed;
	float c = 13.0, m = 0.165;
	cout.precision(0);
	cout << c << " * ";
	cout.precision(6);
	cout << m << " = " << c*m;
	return 0;
}