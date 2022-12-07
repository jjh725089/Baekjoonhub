#include <stdio.h>
#include <stdbool.h>
	
int main(){
	long double aaa, bbb;
	scanf("%Lf %Lf",&aaa,&bbb);
	printf("%.9Lf\n",aaa/bbb);
}