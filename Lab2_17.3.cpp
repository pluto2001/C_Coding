#include <stdio.h>



int main(){
	float a,b;
	char c;
	printf("A.Choice A +\n");
	printf("B.Choice B -\n");
	printf("C.Choice C *\n");
	printf("D.Choice D /\n");
	

	printf("A =");
	scanf("%f",&a);
	printf("B =");
	scanf("%f",&b);
	
	printf("Choice :");
	scanf("%s",&c);
	
	if(c=='a'){
		printf("A+B = %.0f",a+b);
	}else if(c=='b'){
		printf("A-B = %.0f",a-b);
	}else if(c=='c'){
		printf("AXB = %.0f",a*b);
	}else if(c=='d'){
		printf("A/B = %.0f",a/b);
	}

}

