#include <stdio.h>

int main(){
	float number,i;
	printf("\n\nMultiplication Table = ");
	scanf("%.2f",&number);
	for(i=1;i<13;i++){
		printf("\n%.2f X %.0f = %.2f",number,i,number*i);

	}
}
