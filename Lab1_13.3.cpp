#include <stdio.h>

int main(){
	int m,x,b,sum;
	scanf("%d",&m);
	scanf("%d",&x);
	scanf("%d",&b);
	
	sum = m*x+b;
	
	printf("y = %d*%d+%d\n\n",m,x,b);
	printf("%d",sum);
}
