#include <stdio.h>

int main(){
	float pound,sum;
	printf("Weight Conversion Porgram\n");
	
	printf("Enter Weight pound : ");
	scanf("%f",&pound);
	
	sum = pound/2.2;
	
	printf("Weight Conversion to kg. is : %.2f",sum);
}
