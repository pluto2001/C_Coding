#include <stdio.h>



int main(){
	int score;
	char a;
	while(true){
	
		printf("\n\nEnter Score :");
		scanf("%d",&score);
	
		
		if(score>=80&&score<=100){
			printf("Your Grade : A\n");
		}else if(score>=70&&score<=79){
			printf("Your Grade : B\n");
		}else if(score>=60&&score<=69){
			printf("Your Grade : C\n");
		}else if(score>=50&&score<=59){
			printf("Your Grade : D\n");
		}else if(score<50){
			printf("Your Grade : F\n");
		}
		printf("Do you what continue : ");
		scanf("%s",&a);
		if(a == 'y'){
		 	// Whatever 
		}else if (a == 'n'){
			printf("End Program");
			break;
		}
		
			
	}
	
}
