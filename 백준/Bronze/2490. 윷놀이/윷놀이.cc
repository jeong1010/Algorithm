#include <iostream>
using namespace std;
int main() {
	int input;
	int sum0[3], sum1[3];
	for(int k=0;k<3;k++){
		sum0[k] = 0, sum1[k] = 0;
		for (int i = 0; i < 4; i++){
			cin >> input;
			if (input == 0) sum0[k]++;
			else sum1[k]++;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (sum0[i] == 0 && sum1[i] == 4) // 모
			cout << "E" << endl;
		else if (sum0[i] == 1 && sum1[i] == 3) // 도
			cout << "A" << endl;
		else if (sum0[i] == 2 && sum1[i] == 2) // 개
			cout << "B" << endl;
		else if (sum0[i] == 3 && sum1[i] == 1) // 걸
			cout << "C" << endl;
		else if (sum0[i] == 4 && sum1[i] == 0) // 윷
			cout << "D" << endl;
	}
	return 0;
}