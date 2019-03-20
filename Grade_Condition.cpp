/*
	1/2 * base * High
	
	boolean ->    true, false (bool)
	char    ->    A-Z, a-z (ASCII)
	byte    ->    int
	shot    ->    int
	int     ->    int
	long    ->    int
	float   ->    float
	double  ->    float
*/
#include <stdio.h>
void triangle();
void square();
int main(){
	int select;
	while(true){
		printf("1. Triangle\n");
		printf("2. Square\n");
		printf("3. Exit\n");
		
		printf("Select Mode :");
		scanf("%d",&select);
		if(select==1){
			triangle();
		
		}else if(select==2){
			square();
		}else if(select==3){
			return false;
		}
	}
}
void triangle(){
	float base,high,sum;
	printf("Enter base :");
	scanf("%f",&base);
	printf("Enter High :");
	scanf("%f",&high);
	sum = base*high*0.5;
	printf("%.2f\n",sum);
}
void square(){
	float side1,side2,sum;
	printf("Enter side1 :");
	scanf("%f",&side1);
	printf("Enter side2 :");
	scanf("%f",&side2);
	sum = side1*side2;
	printf("%.2f\n",sum);
}
