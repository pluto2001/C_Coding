#include <stdio.h>

int main(){
	char charAZ[1];
	scanf("%s",&charAZ);
	for(char i=90;i>65;i--){
		if(i>=charAZ[0]){
			printf("%c",i);
		}
	}
}
