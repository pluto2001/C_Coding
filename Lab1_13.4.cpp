#include "stdio.h"
//113.15
int main(){
	int sec = 6789;
	int min = sec/60;
	
	float newHour = (min/60);
	float newMin = ((min/60.0)-newHour)*60;
	float newSec = ((sec/60.0)-min)*60;
	
	printf("%.0f : %.0f : %.0f",newHour,newMin,newSec);
	
}
