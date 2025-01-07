#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main() {
	char **input;
	int n;
	cin >> n;
	input = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		input[i] = (char*)malloc(sizeof(char) * 21);
		cin >> input[i];
	}
	for (int i = 0; i < n; i++) {
		if (strlen(input[i]) >= 6 && strlen(input[i]) <= 9) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}