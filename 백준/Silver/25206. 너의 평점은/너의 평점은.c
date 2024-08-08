#include <stdio.h>
#include <string.h>

int main(void) {
	char s[51];
	double n, sum = 0.0, cnt = 0;
	char g[3];
	for (int i = 0; i < 20; i++)
	{
		g[0] = '0', g[1] = '0';
		scanf("%s %lf %s", &s, &n, &g);
		//printf("%s %lf %s\n", s, n, g);
		cnt += n;
		if (strcmp(g,"A+") == 0)
			sum += 4.5 * n;
		//strcmp 사용하기 꼭~~~~
		else if (strcmp(g, "A0") == 0)
			sum += 4.0 * n;
		else if (strcmp(g, "B+") == 0)
			sum += 3.5 * n;
		else if (strcmp(g, "B0") == 0)
			sum += 3.0 * n;
		else if (strcmp(g, "C+") == 0)
			sum += 2.5 * n;
		else if (strcmp(g, "C0") == 0)
			sum += 2.0 * n;
		else if (strcmp(g, "D+") == 0)
			sum += 1.5 * n;
		else if (strcmp(g, "D0") == 0)
			sum += 1.0 * n;
		else if (strcmp(g, "F") == 0)
			sum += 0 * n;
		else if (strcmp(g, "P") == 0)
			cnt = cnt - n;
	}
	printf("%lf",  sum / cnt);
	return 0;
}