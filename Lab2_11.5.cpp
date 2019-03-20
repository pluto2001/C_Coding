#include <stdio.h>

int main(){
	int data1,data2;
	printf("Enter Length and Width of Square :");
	scanf("%d %d",&data1,&data2);
	if(data1==data2){
		printf("This is : square");
	}else if(data1!=data2){
		printf("This is : rectangular");
	}
}


