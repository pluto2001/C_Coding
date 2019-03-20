#include "stdio.h"

int main(){
	char charAZ[2];
	scanf("%s",&charAZ);
	for(char i = 65;i<=90;i++){
		if(i <= charAZ[0] || i >= charAZ[1]){
			printf("%c",i);
		}
	}

}
