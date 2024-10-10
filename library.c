/*
Author:Ring
Reg No:CT101/G/21632/24
Date:02/10/2024
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int book_id;
	int due_date;
	int return_date;
	int overdue;
	int fine_rate;
	int fine_amount;
	//prompt the user to enter due_date
	printf("due_date:");
	scanf("%d",& due_date);
	
	//prompt the user to enter the return_date
	printf("enter the return_date:");
	scanf("%d",&return_date);
	
	overdue=(return_date- due_date);
	
	if(overdue <=7){ 
		fine_rate=20;
		fine_amount=(overdue*fine_rate);
		printf("fine_amount is %d",fine_amount);
		
	}
	else if(overdue<15){
		fine_rate=50;
		fine_amount=(overdue*fine_rate);
		printf("fine_amount is %d",&fine_amount);
		
	}
    else {
		fine_rate=100;
		fine_amount=(overdue*fine_rate);
		printf("fine_amount is %d",fine_amount);
		
	}
	printf("\n the book_id is %d",&book_id);
	printf("\n the due_date is %d",&due_date);
	printf("\n the return_date is %d",&return_date);
	printf("\n the fine'_amount is %d",&fine_amount);
	return 0;
}