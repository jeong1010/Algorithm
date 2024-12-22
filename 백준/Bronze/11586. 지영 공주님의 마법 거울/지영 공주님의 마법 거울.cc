#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int n, f;
	char** str;
	cin >> n;
	str = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
		str[i] = (char*)malloc(sizeof(char) * (n+1));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> str[i][j];
	}

	cin >> f;
	switch (f) {
	case 1:
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << str[i][j];
			cout << endl;
		}
		break;
	case 2:
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j >= 0; j--)
				cout << str[i][j];
			cout << endl;
		}
		break;
	case 3:
		for (int i = n - 1; i >= 0; i--) {
			for (int j = 0; j < n; j++)
				cout << str[i][j];
			cout << endl;
		}
		break;
	}

	for (int i = n - 1; i >= 0; i--)
		free(str[i]);
	free(str);
	return 0;
}