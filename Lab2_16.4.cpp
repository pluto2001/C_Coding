#include <stdio.h>

int main(){
	int score;
	char a;
	while(true){
	
		scanf("%d",&score);
	
		
		if(score>=80&&score<=100){
			printf(" Grade A\n");
		}else if(score>=70&&score<=79){
			printf(" Grade B\n");
		}else if(score>=60&&score<=69){
			printf(" Grade C\n");
		}else if(score>=50&&score<=59){
			printf(" Grade D\n");
		}else if(score<50&&score>100){
			printf(" Grade F\n");
		}
		printf("Do you what continue : ==> ");
		scanf("%s",&a);
		if(a == 'y'){
		
		}else if (a == 'n'){
			printf("Exit");
			return false;
		}
		
			
	}
	
}
