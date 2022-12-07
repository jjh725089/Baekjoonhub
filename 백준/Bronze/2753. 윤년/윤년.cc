#include <stdio.h>
#include <stdbool.h>
	
int main(){
	int y;
	scanf("%d",&y);
	if(y % 100 != 0 && y % 4 == 0 || y % 400 == 0){
		printf("%d",1);
	}
	else
		printf("%d",0);
}