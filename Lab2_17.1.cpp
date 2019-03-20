#include <stdio.h>

int main(){
	int i;
	int parking[3];
	
	for(i=0;i<3;i++){
		printf("Parking hourse =");
		scanf("%d",&parking[i]);
		if(parking[i]<=1){
			printf("Parking fee = 0 Baht\n");
		}else if(parking[i]>=2&&parking[i]<=3){
			printf("Parking fee = 10 Baht\n");
		}else if(parking[i]>=4){
			printf("Parking fee = 20 Baht\n");
		}
	}
	
}
