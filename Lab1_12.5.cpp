#include "stdio.h"

int main(){
	int number = 1823;
	
	int a = ((number/1000))*1000;
	int b = ((number/100)%10)*100;
	int c = ((number/10)%10)*10;
	int d = number%10;
	
	printf("%d + %d + %d + %d",a,b,c,d);
}
