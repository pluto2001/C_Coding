#include <stdio.h>

int main(){
	int be,old,ad;
	printf("Year of brith B.E. : ");
	scanf("%d",&be);
	
	old = 2561-be;
	ad = be-543;
	
	printf("You are old :%d\n",old);
	printf("Year of birth A.D. :%d",ad);
}


