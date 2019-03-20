#include <stdio.h>

int main(){
	int price,data1,data2,data3,data4,data5,data6;
	while(true){
	
		printf("\n\nEnter Total Price(Baht): ");
		scanf("%d",&price);
		data1 = (price/100)*15;
		data2 = price-data1;
		data3 = (price/100)*10;
		data4 = price-data3;
		data5 = (price/100)*5;
		data6 = price-data5;
		if(price>=10000){
			printf("You have Discoun 15 and You Pay %d",data2);
		}else if(price>=5000&&price<10000){
			printf("You have Discoun 10 and You Pay %d",data4);
		}else if(price>=1000&&price<5000){
			printf("You have Discoun 5 and You Pay %d",data6);
		}else if(price>=1&&price<1000){
			printf("Not received Discoun" );
		}else if(price!=0){
			return false;
		}
	}
}
