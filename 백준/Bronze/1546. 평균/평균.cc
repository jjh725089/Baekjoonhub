#include <stdio.h>

int main(){
	int m = 0, n, ap;
	scanf("%d",&n);
	int total = 0;
	for(int i = 0; i < n; i++){
		scanf("%d",&ap);
		total += ap;
		if(ap >= m){
			m = ap;
		}
		//printf("%d",ap);
		//printf("%d",m);
		//printf("%d",total);
	}
	//printf("%d\n",n);
	//float navg = (total / n / m * 100.0);
	//printf("%f\n",navg);
	printf("%f",100.0 * total / n / m);
}