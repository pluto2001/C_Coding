#include <stdio.h>



int main(){
	int data,a;
	int sum = 0;
	printf("Menu\n");
	printf("(+) Addition\n");
	printf("(*) Multiple\n");
	
	printf("Enter data :");
	scanf("%d",&data);
	printf("Enter menu :");
	scanf("%d",&a);
	
	if(a=='+'){
	
		for(int i=1;i<=data;i+=1){
			sum = sum+i;
			printf("Result addition of %d-%d = %d",i,data,sum);
		}
	}
}


