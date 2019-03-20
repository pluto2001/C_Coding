#include <stdio.h>

int main(){
	float weight,high,a,sum;
	
	printf("Weight : ");
	scanf("%f",&weight);
	printf("High : ");
	scanf("%f",&high);
	
	 a = high/100;
	 sum = weight/(a*a);
	
	printf("BMI = %.2f\n",sum);
	
	if(sum<18.5){
		printf("Underweight");
	}else if(sum>18.5&&sum<=24.99){
		printf("Normal weight");
	}else if(sum>=25&&sum<=29.99){
		printf("Overweight");
	}else if(sum>=30){
		printf("Obesity");
	}
}
