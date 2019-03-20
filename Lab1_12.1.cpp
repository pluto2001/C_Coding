#include <stdio.h>

int main(){
	int a,b,c,sum;
	printf("Enter 1 Number For 'A' variable : ");
	scanf("%d",&a);
	printf("Enter 2 Number For 'B' variable : ");
	scanf("%d",&b);
	printf("Enter 3 Number For 'C' variable : ");
	scanf("%d",&c);
	
	sum = 2*a*b+c;
	
	printf("In Term X = 2ab + c : %d ",sum);
}
