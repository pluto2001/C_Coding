#include <stdio.h>

int main(){
	char number;
	int i;
	while(true){
		number = 'a';
		printf("\n\nMultiplication Table = ");
		scanf("%c",&number);

		for(i=1;i<13;i+=1){
			printf("\n%d X %d = %d",number-'0',i,i*number-'0');
		 }

		if(number=='n'){
			return false;
		}
	}
}

	


	
	

