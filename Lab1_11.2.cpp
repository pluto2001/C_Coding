#include <stdio.h>

int main(){
	float sum,value[5];
	char data[20][20] = {"value1","value2","value3","value4","value5"};
	
	for(int i=0;i<5;i+=1){
		printf("%s = ",data[i]);
		scanf("%f",&value[i]);
	}
	
	for(int i=0;i<5;i+=1){
		sum += value[i];
	}
	
	printf("Sum = %.2f",sum/5.0);
}
