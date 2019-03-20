#include <stdio.h>

int main(){
	int ppp,xxx,sum;
	printf("Enter Product in a day kg. : ");
	scanf("%d",&ppp);
	printf("Enter weight per Box g. : ");
	scanf("%d",&xxx);
	
	sum = (ppp*10*10*10)/xxx;
	
	printf("The Total Box in the week : %d",sum);
}
