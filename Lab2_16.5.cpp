#include <stdio.h>

void rectangle();
void triangle();

int main(){
	char a;
	printf("Enter Figure :");
	scanf("%s",&a);
	
	if(a =='r'){
		rectangle();
	}else if(a =='t'){
		triangle();
	}
}

void rectangle(){
	float base,heighe,sum;
	scanf("%f",&base);
	scanf("%f",&heighe);
	
	sum = base*heighe;
	
	printf("Area of Rectangle = %.2f",sum);
}

void triangle(){
	float base,heighe,sum;
	scanf("%f",&base);
	scanf("%f",&heighe);
	
	sum = 0.5*base*heighe;
	
	printf("Area of Rectangle = %.2f",sum);
}
