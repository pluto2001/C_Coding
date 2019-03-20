#include <stdio.h>

int main(){
	int number;
	printf("Enter number = ");
	scanf("%d",&number);
	
	if( (number%2)==0){
		printf("Output_number = %d",number*number);
	}else{
		printf("Output_number = %d",number*number*number);
	}

}


