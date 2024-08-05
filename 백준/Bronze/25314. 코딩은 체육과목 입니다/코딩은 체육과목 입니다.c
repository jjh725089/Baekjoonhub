#include <stdio.h>

int main(void) {
	int n,L;
	scanf("%d", &n);
	if (n % 4 == 0)
	{
		L = n / 4;
	}
	else
	{
		L = n / 4 + 1;
	}
	for (int i = 0; i < L; i++)
	{
		printf("long ");
	}
	printf("int\n");
	return 0;
}