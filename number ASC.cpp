#include "stdio.h"
#include "conio.h"

void mintomax();
void maxtomin();
int continueLoop();

char inputContinue;
int number[5];
bool run = false;

int main(){

	int tmp;

	while(true){
		if(run == true){
			printf("Enter Y to continue : ");
			inputContinue = getche();
			if(inputContinue == 'y'){
		
			}else if(inputContinue == 'n'){
				return false;
			}
			printf("\n\n");	
			run = false;
		}
		
		if(run == false){
			printf("1.Min to Max\n");
			printf("2.Max to Min\n");
			
			int select;
			printf("select Mode : ");
			scanf("%d",&select);
			
			for(int i=0;i<5;i+=1){
				printf("Enter number %d : ",i+1);
				scanf("%d",&number[i]);
			}
		
			for(int i=0;i<4;i+=1){
				for(int j=0;j<4;j+=1){
					if(number[j]>number[j+1]){
						tmp = number[j];
						number[j] = number[j+1];
						number[j+1] = tmp;
					}
		
				}
			}
			
			if(select==1){
				mintomax();
			}else if(select==2){
				maxtomin();
			}
			run = true;
			printf("\n\n");			
		}		
	}
}

int continueLoop(){
	
}


void mintomax(){
	printf("\n\n Min ot Max : ");
	for(int i=0;i<5;i+=1){
		printf("\t%d", number[i]);
	}
}

void maxtomin(){

	printf("\n Max ot Min : ");
	for(int i=4;i>=0;i-=1){
		printf("\t%d", number[i]);
	}
}
	
	
	

