#include <stdio.h>

float hello(float a, float b); // Binding Function
void testData(int data);

int main(){	
	// float a= hello(10.5, 20.2);
	printf("%.2f", hello(10.5, 20.2));
	testData(20);
}

float hello(float a, float b){  // 2 call by value


	return a+b;
}


void testData(int data){  // 1 pass value  // No return
	printf("\nHello World %d",data);
}

