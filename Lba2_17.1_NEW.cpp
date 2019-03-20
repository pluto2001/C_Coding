#include "stdio.h"

int main(){
	int count = 0;
	int money = 0;
	
	scanf("%d",&count);
	if(count == 1){
		money = 0;
	}else if(count > 1 && count < 4){
		money = 10;
	}else{
		money = 10;
		for(int i=0;i<count-3;i++){
			money += 20;
		}
	}
	
	printf("%d",money);
}
