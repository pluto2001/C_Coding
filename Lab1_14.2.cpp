#include <stdio.h>

int main(){
	int number,size,sum;
	printf("Room number : ");
	scanf("%d",&number);
	printf("Room size : ");
	scanf("%d",&size);
	
	sum = size*5;
	
	printf("\nRoom %d\n",number);
	printf("\nCentral expenses = %d",sum);
	
}
