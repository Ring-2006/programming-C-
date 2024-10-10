#include <stdio.h>
int main()
{
	int i =1,sum =0, sumofsquares=0;
	
	do{
		sum += i;
		sumofsquares += i*i; 
		printf(" %d\t%d\n", i, i*i);
		
		i++;
	} while(i <=20);
	{
		printf("\n sum of numbers: %d\n", sum);
		printf("sum of squares : %d\n", sumofsquares );
	}
	return 0;
}