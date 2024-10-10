/*
Author:Elijah Oduor
Reg No:CT101\G\21632\24
Date:
*/
#include <stdio.h>
int main()
{
  int age;
  float annual_income;
//prompt the user to enter age
printf("enter the age:");
scanf("%d",&age);

//prompt the user to enter the annual_income
printf("enter annual_income:");
scanf("%f",&annual_income);
	
 if(age >=21 && annual_income >=21000) {
	printf("Congratulations you qualify for a loan:");
}
  else
 {
	printf("Unfortunately,we are not able to offer you a loan at this time:");  
 }

	return 0;
}