#include <stdio.h>

int main(void) {
	char s[100] , cnt = 0;
	scanf("%s", &s);
	for (int i = 0; i < 100; i++)
	{
		if (s[i] == NULL)
			break;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}