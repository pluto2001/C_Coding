#include <stdio.h>

int main(){
	float sum,numberInput[3];
	
	char dataShow[20][20] = {"Hello World", "OK", "Home"};
	printf("Porgram Average calculation\n");
	
	for(int i=0;i<3;i+=1){
		printf("Enter %s ",dataShow[i]);
		scanf("%f",&numberInput[i]);
	}
	
	for(int i=0;i<3;i+=1){
		sum += numberInput[i];
	}
	
	printf("The Average of three height is : %.2f",sum);
}
