#include <stdio.h>

int main(){
	int name,time,sum;
	printf("Name :");
	scanf("%s",&name);
	printf("what time is the car park? : ");
	scanf("%d",&time);
	
	sum = time*10;
	
	printf("\nHi %s\n",name);
	printf("Parking fee = %d",sum);
	
}
