#include <stdio.h>

int main(){
	char a;
	int data;

	printf("ID :");
	scanf("%s",&a);
	printf("Name :");
	scanf("%s",&a);
	printf("Age :");
	scanf("%d",&data);
	
	if(data<=10){
		printf("(Children)");
	}else if(data>=11&&data<=20){
		printf("(Teen)");
	}else if(data>=21&&data<=35){
		printf("(Adult)");
	}else if(data>=36&&data<=55){
		printf("(Middle)");
	}else if(data>=56){
		printf("(Old)");
	}
}
