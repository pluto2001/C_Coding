#include "stdio.h"
 // i++, i=i+1, i+=1; = +1 
void whileLoop(int data);
void forLoop();
void dowhileLoop();

// Variable 1. Global 2. Local
// Big Global

int main(){

	int z = 20;
	// whileLoop(z);
	// forLoop();
	dowhileLoop();
}

void forLoop(){ 
	int i;
	for(i = 0;i<=1;i+=3){
		printf("%d\n", i); 
	}	
}

void whileLoop(int data){
	int i = 0;
	while(i<=9){
		printf("%d\n", i);
		i++;
	}	
}

void dowhileLoop(){
	int i = 0;
	do{
		printf("%d", i);
		// i++;
	}while(i<=0);
}
