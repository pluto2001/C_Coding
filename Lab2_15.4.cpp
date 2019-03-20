#include "stdio.h"

int main(){
	int round = 0;
	printf("Enter 2D = ");
	scanf("%d",&round);
	for(int i=0;i<round;i+=1){
		for(int j=0;j<=i;j+=1){
			printf("*");
		}
		printf("\n\n");
	}
}
