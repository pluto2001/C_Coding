#include <stdio.h>
void pound();
void kg();
int main(){
	
	char a;
	
	printf("\nWeight Conversion select P/K? :");
	scanf("%s",&a);
	
	if(a=='p'){
		pound();
	}else if(a=='k'){
		kg();
	}
	
}

void pound(){
	float pound,sum;
	printf("Enter Weight in pound : ");
	scanf("%f",&pound);
	
	sum = pound/2.2046;
	
	printf("Weight Conversion to kg. is : %.2f kg",sum);
}

void kg(){
	float kg,sum;
	printf("Enter Weight in kg :");
	scanf("%f",&kg);
	sum = kg*2.2046;
	
	printf("Weight Conversion to pound is : %.2f pound",sum);
	
}
