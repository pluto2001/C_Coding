#include <stdio.h>

int main(){
	int input[5];
	int max;
	int min;
	char data[5][5] = {"A =","B =","C =","D =","E ="};
	for(int i=0;i<5;i++){
		printf("%s",data[i]);
		scanf("%d",&input[i]);
		if(i == 0){ 
			max = input[i];
		}
		if(input[i] > max){
			max = input[i];
		}
		if(i == 0){
			min = input[i];
		}
		if(input[i] < min){
			min = input[i];
		}
		
	}
	printf("Max = %d\n",max);
	printf("Min = %d",min);
}
