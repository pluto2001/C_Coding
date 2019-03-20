#include <stdio.h>

int main(){
	int width,length,high,sum;
	printf("Program volume calculation\n");
	
	printf("Enter width : ");
	scanf("%d",&width);
	printf("Enter length : ");
	scanf("%d",&length);
	printf("Enter high : ");
	scanf("%d",&high);
	
	sum = width*length*high;
	
	printf("The volume of object is : %d",sum);
}
