#include <stdio.h>

int main(){
	float cost,profit,sum;
	printf("Cost :");
	scanf("%f",&cost);
	printf("Profit :");
	scanf("%f",&profit);
	
	sum = ((profit/100)*cost)+cost;
	printf("Sale Price : %.2f",sum);
	
}
