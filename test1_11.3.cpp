#include <stdio.h>

int main(){
	float weight,high,m,bmi;
	printf("Weight =");
	scanf("%f",&weight);
	printf("High =");
	scanf("%f",&high);
 
	m = high/100;
	bmi = weight/(m*m);
	printf("BMI = %.2f",bmi);
}
