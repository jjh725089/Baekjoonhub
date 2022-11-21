#include <stdio.h>

int main(void) {
	int A,a,B,b,C,c;
	scanf("%d %d\n%d %d\n%d %d",&A,&a,&B,&b,&C,&c);
	if(A == B){
		printf("%d ",C);
	}
	else if(A == C){
		printf("%d ",B);
	}
	else{
		printf("%d ",A);
	}
	if(a == b){
		printf("%d ",c);
	}
	else if(a == c){
		printf("%d ",b);
	}
	else{
		printf("%d ",a);
	}
	
}