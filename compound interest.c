/*
PROGRAM TO CLACULATE COMPOUND INTEREST
Author:Elijah
Reg No:CT101/G/21632/24
Date:
*/
#include <stdio.h>
#include <math.h>
int main(){
  float Principle,Rate,Time,N;
  
  //Prompt the user to enter Principle
  printf("Enter the Principle:");
  scanf("%f",&Principle);
//Prompt the user to enter Rate
  printf("Enter the Rate:");
  scanf("%f",&Rate);
  //Prompt the user to enter Time
  printf("Enter the Time:");
  scanf("%f",&Time);
	//Prompt the user to enter N
  printf("Enter the N:");
  scanf("%f",&N);
  //Calculate Compound Interest
  float Compound_Interest=Principle*pow((1+(Rate/(100*N))),N*Time)-Principle;
  printf("the compound_interest is:%f",Compound_Interest);
	return 0;
}