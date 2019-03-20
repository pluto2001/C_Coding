#include <stdio.h>

int main(){
	float price,discountprice,a;
	
	printf("Program POS calculation\n");
	
	printf("Enter Price :");
	scanf("%f",&price);
	printf("Enter Discount price is :");
	scanf("%f",&discountprice);
	
	a = 100*(discountprice/price);
	if(a<50){
		printf("Your Discount is less than.50 percent");
	}else if(a>50){
		printf("Your Discount is more than.50 percent");
	}

}
