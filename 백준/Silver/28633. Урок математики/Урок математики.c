#include <stdio.h>
#include <math.h>
int main() {
	double rab, rac, rbc, ab, ac, bc, tmp, a, b, c;
	scanf("%lf", &rab);
	scanf("%lf", &rac);
	scanf("%lf", &rbc);

	ab = pow(rab, 2);
	ac = pow(rac, 2);
	bc = pow(rbc, 2);

	tmp = ab / ac; // b/c
	b = sqrt(bc * tmp);
	c = bc / b;
	a = ab / b;

	printf("%lf\n%lf\n%lf\n", a, b, c);

	return 0;
}