#include <stdio.h>

int main(){
	 float price,percent,sum1,sum2;
	printf("Program POS calculation\n");
	
	printf("Enter Price : ");
	scanf("%f",&price);
	printf("Enter Percent Discount : ");
	scanf("%f",&percent);
	
	sum1 = price*(percent/100);
	sum2 = price-(price*(percent/100));
	
	printf("Your Discount is : %.0f\n",sum1);
	printf("Your Net Price is : %.0f",sum2);
}
