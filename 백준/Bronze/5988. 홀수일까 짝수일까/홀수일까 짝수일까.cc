#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int n;
	char k[100][62];
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> k[i];
	for (int i = 0; i < n; i++) {
		if ((k[i][strlen(k[i]) - 1] - '0') % 2 == 0)
			cout << "even\n";
		else
			cout << "odd\n";
	}
	return 0;
}