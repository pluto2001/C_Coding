#include "stdio.h"

int main(){
	char inputChar[3];
	int sum;
	for(int i=0;i<3;i+=1){
		scanf("%s",&inputChar[i]);
		printf("\n%d\n",inputChar[i]);
		sum += inputChar[i];
	}
	printf("\n\n%d",sum);
	
}
