#include <iostream>
using namespace std;
int main() {
	int l, t;
	cin >> l;
	t = l / 5;
	if (l % 5 > 0) t++;
	cout << t << endl;
	return 0;
}