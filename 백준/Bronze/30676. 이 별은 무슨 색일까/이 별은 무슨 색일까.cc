#include <iostream>
using namespace std;
int main() {
	int h;
	cin >> h;
	if (h >= 620 && h <= 780)
		cout << "Red\n";
	else if (h >= 590 && h < 620)
		cout << "Orange\n";
	else if (h >= 570 && h < 590)
		cout << "Yellow\n";
	else if (h >= 495 && h < 570)
		cout << "Green\n";
	else if (h >= 450 && h < 495)
		cout << "Blue\n";
	else if (h >= 425 && h < 450)
		cout << "Indigo\n";
	else if (h >= 380 && h < 425)
		cout << "Violet\n";
	return 0;
}