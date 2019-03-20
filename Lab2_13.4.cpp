#include <stdio.h>

void circumference();
void area();


int main(){
	char s;
	printf("Enter Circle calculation C / A :");
	scanf("%s",&s);
	
	if(s =='c'){
		circumference();	
	}else if(s =='a'){
		area();
	}
}

void circumference(){
	float radius,sum;
	printf("Enter radius :");
	scanf("%f",&radius);
	
	sum = (2*3.1428)*radius;
	
	printf("The circumference is : %.2f",sum);
}

void area(){
	float radius,sum;
	printf("Enter radius :");
	scanf("%f",&radius);
	
	sum = 3.1428*radius*radius ;
	
	printf("The area is : %.2f",sum);
}

