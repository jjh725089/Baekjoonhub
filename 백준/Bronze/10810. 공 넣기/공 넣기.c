#include <stdio.h>

int main(void) {
	int N[100] = { 0 }, n, m;
	scanf("%d %d", &n, &m);
	int I, J, K;
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %d", &I, &J, &K);
		for (I; I <= J; I++)
		{
			N[I] = K;
		}
	}
	for (int i = 1; i < n + 1; i++)
	{
		printf("%d ", N[i]);
	}
	return 0;
}