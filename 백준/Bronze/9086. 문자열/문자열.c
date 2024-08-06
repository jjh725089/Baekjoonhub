#include <stdio.h>

int main(void) {
	int t;
	char N[1000];
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int cnt = 0;
		scanf("%s", &N);
		while (N[cnt] != NULL)
		{
			cnt++;
		}
		printf("%c%c\n", N[0], N[cnt - 1]);
	}
	return 0;
}