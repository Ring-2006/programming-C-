// C arrays- 1D arrays
#include <stdio.h>
int main()
{
	int i;
	int marks[6] = {10,20,30,40,50,60,70};
	for(i=0;i<6;i++){
		printf("Marks [%d] = %d\n",i, marks[i]);
	}
	
	return 0;
}