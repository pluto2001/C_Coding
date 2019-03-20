#include <stdio.h>

void triangle();
void square();
void circle();
void rectangle();
void parallelogram();

int main(){
	int select;
	while(true){
		printf("\n1.triangle\n");
		printf("2.square\n");
		printf("3.circle\n");
		printf("4.rectangle\n");
		printf("5.parallelogram\n");
		printf("6.Quit the program\n");
		
		printf("*---------------------------*");
		
		printf("\nSelect Mode :  ");
		scanf("%d",&select);
		if(select==1){
			triangle();
		}else if(select==2){
			square();
		}else if(select==3){
			circle();
		}else if(select==4){
			rectangle();
		}else if(select==5){
			parallelogram();
		}else if(select==6){
			return false;
		}
	}
	
}

void triangle(){
	float base,high,sum;
	printf("Enter base : ");
	scanf("%f",&base);
	printf("Enter high : ");
	scanf("%f",&high);
	
	sum = 0.5*base*high;
	
	printf("Answer %.2f\n",sum);
}

void square(){
	float side,sum;
	printf("Enter side1 : ");
	scanf("%f",&side);
	printf("Enter side2 : ");
	scanf("%f",&side);
	
	sum = side*side;
	
	printf("Answer %.2f\n",sum);
}

void circle(){
	float radius,sum;
	printf("Enter radius : ");
	scanf("%f",&radius);
	
	sum = 3.14*radius*radius;
	
	printf("Answer %.2f\n",sum);
}

void rectangle(){
	float wide,length,sum;
	printf("Enter wide : ");
	scanf("%f",&wide);
	printf("Enter long : ");
	scanf("%f",&length);
	
	sum = wide*length;
	
	printf("Answer %.2f",sum);
}

void parallelogram(){
	float base,high,sum;
	printf("Enter base : ");
	scanf("%f",&base);
	printf("Enter high : ");
	scanf("%f",&high);
	
	sum = base*high;
	
	printf("Answer %.2f\n",sum);
}
