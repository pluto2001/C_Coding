#include<stdio.h>


 int main()

{

	int i,min,max,n;

	min,max=0;

	for(i=1;i<=10;i++){

		printf("enter num #%d : ",i);

		scanf("%d",&n);

		if(n>max){

			max=n;

		}

		else if(n<min){

			min=n;

		}

		

	}

	printf("max = %d\n",max);

	printf("min = %d\n",min);



}
