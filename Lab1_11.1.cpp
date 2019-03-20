#include <stdio.h>

int main(){
	float saleprice,discount;
	printf("Sale Price = ");
	scanf("%d",&saleprice);
	printf("Discount = ");
	scanf("%d",&discount);
	
	
	
	printf("Discount = %.2f",(discount/saleprice)*100);
}
