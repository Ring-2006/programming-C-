/*
//PROGRAM TO CALCULATE SIMPLE INTEREST
Author:
Reg No
Date
*/
#include <stdio.h>
#include <math.h>
int main(){
	float principle,time,rate,interest;
	//prompt the user to enter principle
	printf("Enter the principle:");
	scanf("%f",&principle);
	//prompt the user to enter time
	printf("Enter the time:");
	scanf("%f",&time);
	//prompt the user to enter rate
	printf("Enter the rate:");
	scanf("%f",&rate);
	//calculate simple interest;
	interest=principle*time*rate/100;
	printf("interest: %f", interest);
	
	return 0;
}
