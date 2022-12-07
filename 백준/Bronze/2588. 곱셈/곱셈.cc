#include <stdio.h>
#include <stdbool.h>
	
int main(){
	int aaa, bbb;
	scanf("%d\n%d",&aaa,&bbb);
	int a = bbb / 100, b = bbb / 10 - a * 10, c = bbb - a*100 - b*10;

	printf("%d\n",aaa*c);
	printf("%d\n",aaa*b);
	printf("%d\n",aaa*a);
	printf("%d\n",aaa*bbb);
}