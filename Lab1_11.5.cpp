#include <stdio.h>

int main(){
	float ab,squre,circle,newsqure,sum;
	printf("AB : ");
	scanf("%f",&ab);
	
	squre = ab*ab;
	circle = 3.1428*(ab/2)*(ab/2);
	newsqure = squre-circle;
	newsqure = newsqure*0.25;
	circle = circle*0.25;
	sum = newsqure+circle;
	
	printf("%.2f",sum);
	
}
