#include <stdio.h>
int selfTest(int num) { // d(n) 결과
	int input = num;
	int n[5];
	int temp, how, i;
	if (num >= 10000) {
		temp = 10000;
		how = 5;
	}
	else if (num >= 1000) {
		temp = 1000;
		how = 4;
	}
	else if (num >= 100) {
		temp = 100;
		how = 3;
	}
	else if (num >= 10) {
		temp = 10;
		how = 2;
	}
	else {
		temp = 1;
		how = 1;
	}
	for (i = 0; i < how; i++) {
		n[i] = num / temp;
		num = num % temp;
		temp /= 10;
	}
	switch (how) {
	case 5:
		return input + n[0] + n[1] + n[2] + n[3] + n[4];
		break;
	case 4:
		return input + n[0] + n[1] + n[2] + n[3];
		break;
	case 3:
		return input + n[0] + n[1] + n[2];
		break;
	case 2:
		return input + n[0] + n[1];
		break;
	case 1:
		return input + n[0];
		break;
	}
}
int main() {
	int selfArr[10000] = { 0, };
	for (int i = 1; i <= 10000; i++) {
		if (selfTest(i) >= 10000)
			continue;
		selfArr[selfTest(i)]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (selfArr[i] == 0) printf("%d\n", i);
	}
	return 0;
}