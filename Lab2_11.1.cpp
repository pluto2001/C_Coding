#include <stdio.h>

int main(){
	int numberstart = 0,numberend = 0,sum = 0;
	printf("Enter Start Number =");
	scanf("%d",&numberstart);
	printf("Enter End Number =");
	scanf("%d",&numberend);
	printf("Renge Number : ");
	for(int i=numberstart;i<=numberend;i+=1){
		sum+=i;
		printf(" %d ",i);
	}
	
	printf("\nTotal Number: %d",sum);
}
