#include <stdio.h>

int main(){
	int number,unit,sum;
	printf("Meter number : ");
	scanf("%d",&number);
	printf("Amount used per unit : ");
	scanf("%d",&unit);
	
	sum = unit*5;
	
	printf("\nMeter number %d\n",number);
	printf("Water bill = %d",sum);
}
