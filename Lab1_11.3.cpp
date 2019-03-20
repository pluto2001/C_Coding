#include <stdio.h>

int main(){
	float weight,high,sum;
	printf("Weight :");
	scanf("%f",&weight);
	printf("high :");
	scanf("%f",&high);
	
	sum = (weight/high)*high;
	printf("BMI : %.2f",sum);
}
