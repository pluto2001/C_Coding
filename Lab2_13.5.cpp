#include <stdio.h>

int main(){
	float aa,bb,cc,dd,ee,sum;
	while(true){
		printf("\nPorgram Average calculation\n");
		printf("Enter 1 hight  :");
		scanf("%f",&aa);
		printf("Enter 2 hight  :");
		scanf("%f",&bb);
		printf("Enter 3 hight  :");
		scanf("%f",&cc);
		printf("Enter 4 hight  :");
		scanf("%f",&dd);
		printf("Enter 5 hight  :");
		scanf("%f",&ee);
		
		sum = (aa+bb+cc+dd+ee)/5;
		
		printf("The Average of five hight is %.2f",sum);
	}
}
