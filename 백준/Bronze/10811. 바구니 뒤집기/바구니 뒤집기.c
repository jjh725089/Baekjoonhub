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
		int tmp_J = J, tmp_I = I;
		for (int j = 0; j < (J + 1 - I) / 2; j++)
		{
			tmp = N[tmp_J];
			N[tmp_J] = N[tmp_I];
			N[tmp_I] = tmp;
			tmp_J--;
			tmp_I++;
		}
	}
	for (int i = 1; i < n + 1; i++)
	{
		printf("%d ", N[i]);
	}
	return 0;
}