#include <stdio.h>

int main(){
	int id,salary,overtime,sum;
	int data1,data2,data3,data4,data5;
	char name[20];
	printf("ID :");
	scanf("%d",&id);
	printf("Name :");
	scanf("%s",&name);
	printf("Salary :");
	scanf("%d",&salary);
	printf("Overtime :");
	scanf("%d",&overtime);
	
	sum = salary+overtime;
	
	printf("%d %s\n",id,name);
	printf("Income = %d\n",sum);
	data1 = (sum*10)/100;
	data2 = (sum*7)/100;
	data3 = (sum*5)/100;
	data4 = (sum*3)/100;
	data5 = (sum*1)/100;
	if(sum>100000){
		printf("Tax = %d Baht",data1);
	}else if(sum>=70000&&sum<100000){
		printf("Tax = %d Baht",data2);
	}else if(sum>=50000&&sum<70000){
		printf("Tax = %d Baht",data3);
	}else if(sum>=30000&&sum<50000){
		printf("Tax = %d Baht",data4);
	}else if(sum<30000){
		printf("Tax = %d Baht",data5);
	}
	

}
