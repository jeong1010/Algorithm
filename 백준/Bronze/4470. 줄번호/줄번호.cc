#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int n;
	char** str;
	cin >> n;
	cin.ignore();
	str = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
		str[i] = (char*)malloc(sizeof(char) * 51);
	for (int i = 0; i < n; i++)
		cin.getline(str[i], 51);
		//cin >> str[i];
	for (int i = 0; i < n; i++)
		cout << i + 1 << ". " << str[i] << endl;
	for (int i = n - 1; i >= 0; i--)
		free(str[i]);
	free(str);
	return 0;
}