#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int r, rr, c;
	r  = 1;
	c = 2;
	
	while(0 == 0){
		rr = r + 6 * (c-1);
		if(n == 1){
			printf("%d",1);
			break;
		}
		else if(r < n && n <= rr){
			printf("%d",c);
			break;
		}
		//r += 6*(c-1);
		r = rr;
		c = c + 1;
	}
}