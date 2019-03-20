#include "stdio.h"

int main(){
	// Pointer
	char* month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	int numMonth = 0;
	int day,year;
	printf("Enter Day :");
	scanf("%d",&day);
	printf("Enter Month :");
	scanf("%d",&numMonth);
	printf("Enter Year :");
	scanf("%d",&year);
	printf("%s",month[numMonth-1]);
	
}
