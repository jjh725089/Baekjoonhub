#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void) {
	int i;
	scanf("%d",&i);
	double u = M_PI * i * i;
	double t = 2 * i * i;
	printf("%lf\n",u);
	printf("%lf\n",t);
}