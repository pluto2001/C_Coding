#include <stdio.h>
void sutkun(int data,int a);
int main(){
	int number1,number2;
	printf("Enter sutkun:");
	scanf("%d",&number1);
	printf("Enter a:");
	scanf("%d",&number2);
	sutkun(number1,number2);
	
}
void sutkun(int data,int a){
	int i=0;
	for(i=1;i<=a;i+=1){
		printf("%d X %d =%d\n",data,i,data*i);
	
	}
}


