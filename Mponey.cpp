#include <stdio.h>

int main(){
	float Money,use,sum;
	printf("Sale Price :");
	scanf("%d",&Money);
	printf("Discount :");
	scanf("%d",&use);
	
	sum = Money-use;
	sum = (sum/Money)*100.0;
	
	printf("Discount : %.0f ", sum);
}
