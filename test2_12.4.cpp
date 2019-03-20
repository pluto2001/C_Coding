#include "stdio.h"

int main(){
	
	int input[5];
	int count = 0;
	
	for(int i=0;i<5;i++){
		scanf("%d",&input[i]);
		if(input[i] > 50){
			count +=1;
		}
	}
	printf("\n%d", count);
}
