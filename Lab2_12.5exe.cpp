#include "stdio.h"

int main(){
	int round = 0;
	scanf("%d",&round);
	int input[round];
	int count = 0;
	
	for(int i=0;i<round;i++){
		scanf("%d",&input[i]);
		if(input[i] < 50){
			count +=1;
		}
	}
	printf("\nNumber <50 := %d", count);
}
