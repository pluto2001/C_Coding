#include <stdio.h>
void volume();
int main(){
	char a;
	while(true){
	
		printf("\n\nDo you want calculation volume Y/N :");
		scanf("%s",&a);
		if(a =='y'){
			volume();
		}else if(a =='n'){
			printf("End Program");
				break;
		}
	}
}

void volume(){
	float width,length,high,sum;
	printf("Enter width :");
	scanf("%f",&width);
	printf("Enter length :");
	scanf("%f",&length);
	printf("Enter high :");
	scanf("%f",&high);
	
	sum = width*length*high;
	
	printf("The volume of object is : %.2f",sum);
}
