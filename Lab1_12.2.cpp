#include <stdio.h>

int main(){
	int midterm,final,accum,total;
	printf("Enter midterm score : ");
	scanf("%d",&midterm);
	printf("Enter final score : ");
	scanf("%d",&final);
	printf("Enter accum score : ");
	scanf("%d",&accum);
	
	total = midterm+final+accum;
	
	printf("The Total Score is : %d",total);
}
