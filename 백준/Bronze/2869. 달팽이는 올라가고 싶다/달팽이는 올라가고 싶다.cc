#include <stdio.h>

int main(void) {
	int A,B,V;
	scanf("%d %d %d",&A,&B,&V);
	int count;

	if((V - B) % (A - B) == 0){
		count = (V - B) / (A - B);
	}
	else{
		count = (V - B) / (A - B) + 1;
	}
	printf("%d",count);
}