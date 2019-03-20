#include "stdio.h"

int main(){
	char name[50];
	int number;
	printf("Name : ");
	scanf("%s",&name);
	printf("Enter : ");
	scanf("%d",&number);
	printf("\n\nHi %s",name);
	printf("\n%d",number*10);
}
