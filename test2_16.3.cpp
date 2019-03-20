#include <stdio.h>

int main(){
	int round = 0;
	int input[3];
	int min;
	scanf("%d",&round);
	
	for(int i=0;i<round;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&input[j]);
			if(j == 0){ 
				min = input[j];
			}
			if(input[j] < min){
				min = input[j];
			}
		}
		printf("\n%d\n", min);
		printf("---------------------------\n\n");
	}
}
