#include <stdio.h>

int main(void) {
	int N[100],n,m, I, J, tmp;
	scanf("%d %d", &n, &m);
	for (int i = 1; i < n + 1; i++)
	{
		N[i] = i;
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &I, &J);
		tmp = N[I];
		N[I] = N[J];
		N[J] = tmp;
	}
	for (int i = 1; i < n + 1; i++)
	{
		printf("%d ", N[i]);
	}
	return 0;
}