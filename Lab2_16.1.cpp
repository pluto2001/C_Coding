#include <stdio.h>

int main(){
	int num1,number,i;
	scanf("%d",&num1);
	for(i=0;i<num1;i++){
		scanf("%d",&number,i+1);
		if((number%2)==0){
		printf("%d is even number\n",number);
		}else{
			printf("%d is odd number\n",number);
		}
	}

	
}
