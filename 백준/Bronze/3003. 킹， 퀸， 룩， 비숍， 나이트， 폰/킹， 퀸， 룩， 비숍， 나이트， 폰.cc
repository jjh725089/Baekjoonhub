#include <stdio.h>
#include <stdbool.h>
	
int main(){
	int k,q,r,b,kn,p;
	scanf("%d %d %d %d %d %d",&k,&q,&r,&b,&kn,&p);
	int wk = 1,wq = 1,wr = 2,wb = 2,wkn = 2,wp = 8;
	printf("%d %d %d %d %d %d",wk-k,wq-q,wr-r,wb-b,wkn-kn,wp-p);
	
}