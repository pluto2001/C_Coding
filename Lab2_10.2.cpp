#include <stdio.h>

int main(){
	int first,second;
	printf("First Number = ");
	scanf("%d",&first);
	printf("Second Number = ");
	scanf("%d",&second);
	
	if(first>second){
		printf("%d is bigger than %d",first,second);
	}else if(first<second){
		printf("%d is small than %d",first,second);
	}else if(first=second){
		printf("%d is equal to %d",first,second);
	}
}
