//For loop output numbers 1-20
/*
User:Elijah Oduor
Reg No:CT101/G/21632/24
*/
#include <stdio.h>
int main()
{
	int i = 1, sum =0,sumofcubes = 0;
	
	while(i <= 20)
	{
		sum+=i;
		sumofcubes += i*i*i;
		printf("%d\t%d\n", i, i*i*i);
		i++;
	}
	
	printf("\n sum of numbers: %d\n", sum);
	printf("sum of squares : %d\n", sumofcubes );

	return 0;
}