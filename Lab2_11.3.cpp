#include <stdio.h>

int main(){
	int number = 0;
	printf("Please Enter n number :");
	scanf("%d",&number);
	printf("The divisible by 5 is:");
	for(int i=1;i<=number;i+=1){
		if(i%5 == 0){
			printf("%d ",i);
		}
	}
	
}
