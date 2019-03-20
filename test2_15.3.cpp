#include <stdio.h>

int main(){
	float number,i;
	printf("Multiplication Table = ");
	scanf("%f",&number);
	
	for(i=1;i<13;i++){
		printf("%.2f X %.0f = %.1f\n",number,i,number*i);
	}
}
