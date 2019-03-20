#include "stdio.h"

// Octal = 8
// Decimal = 10
// Hextar = 16
// Binary = 2
 
int main(){
	int number,number1;
	scanf("%d",&number);
	scanf("%d",&number1);
	printf("%o,  %x\n",number,number);
	printf("%o,  %x",number1,number1);
	printf("\n\nSummation of %d and %d is %d",number,number1,number+number1);
	
	
}
