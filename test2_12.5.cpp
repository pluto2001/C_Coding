#include <stdio.h>

int main(){
	int round = 0;
	int i;
	int number[round];
	int count = 0;
	scanf("%d",&round);
	
	for(i=0;i<round;i++){
		scanf("%d",&number[i]);
		if(number[i]<50){
			count+=1;
		}
	}
	
	printf("Number <50 := %d",count);
}
