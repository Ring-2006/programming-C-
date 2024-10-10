//For loop output numbers 1-20
/*
User:Elijah Oduor
Reg No:CT101/G.21632/24
*/
#include<stdio.h>
int main ()
{
	int sum = 0; 
	int sum_of_squares = 0;
	for(int i =1;i <=20;i++) {
		sum+=i;
		
		sum_of_squares+=i*i;
		printf(" %d\t%d\n", i, i*i);	 
	} 
	printf("\nsum of numbers:%d\n",sum);
	printf("sum of squares:%d\n",sum_of_squares);
	  
	  return 0;
}


