//C functions
#include <stdio.h> 
#include <math.h>
int sum(int e, int f, int g);
int multiplication(int i, int j);

int main()
{
	int e, f, g, i, j, k;
	printf("enter the 3 values: ");
	scanf("%d%d%d", &i, &j, &k);
	e=sum(i, j, k);
	f=sum(50, 100, 150);
	g=multiplication(i, j);
	
	printf("The sum is %d \n", e);
    printf("The  2nd sum is %d \n", f);	
	printf("The multi is %d \n", g);
	
		return 0;
}
int sum(int e,int f, int g){
	int result;
	result= e + f + g;
	return result;	
}

int multiplication(int i, int j){
	int result;
	result= i * j;
	return result;
	
	
	
}

