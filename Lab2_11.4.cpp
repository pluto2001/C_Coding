#include <stdio.h>

int main(){
	int number;
	int sum = 0;
	printf("Enter Solution Number:");
	scanf("%d",&number);
	for(int i=1;i<=number;i+=1){
		sum+=i*i;
		if(i == 1){
			printf("Result Solution: %d^2",i);
		}else if(i < number){
			printf(" + %d^2 +",i);
		}else if(i == number){
			printf("%d^2 + = %d",i,sum);
		}
	}
}
