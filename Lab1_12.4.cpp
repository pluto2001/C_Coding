#include <stdio.h>

int main(){
	float sum,number[5];
	char  data[20][20]={"number1","number2","number3","number4"};
	
	for(int i=0;i<4;i+=1){
		printf("Enter %s = ",data[i]);
		scanf("%f",&number[i]);
		sum += number[i];
	}

	
	printf("Summary Number : %.2f",sum);
	
}
