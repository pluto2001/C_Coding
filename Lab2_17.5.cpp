#include <stdio.h>

int main(){
	int number;
	char a;
	while(true){

		printf("Numbar :");
		scanf("%d",&number);
		printf("%s ", number%2 == 0? "Event Number" : "Odd Number");
		
		printf("\nDo you what to continue Y/N :");
		scanf("%s",&a);
		
		if(a =='y'){
			
		}else if(a =='n'){
			return false;
		}
	}
}
