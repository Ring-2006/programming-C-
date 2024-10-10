#include <stdio.h>
int main()
{
	int customerID,unitsConsumed;
	char customerName[40];
	float chargePerUnit,totalBill,surcharge =0.0;
	printf("Enter customerID:" );
	scanf("%d",&customerID);
	
	printf("Enter customerName:" );
	scanf("%s",customerName);
	
	printf("Enter unitsConsumed:" );
	scanf("%d",&unitsConsumed);
	
	if(unitsConsumed <= 199){ 
	  chargePerUnit	= 1.20;
	}
		else if(unitsConsumed >=200 && unitsConsumed <400) {
			chargePerUnit =1.50;
		}
		
		else if(unitsConsumed >=400 && unitsConsumed <=600){
			chargePerUnit =1.80;
		}
		else{ 
			chargePerUnit =2.00;
		}
			totalBill =unitsConsumed*chargePerUnit;
			
			
        if(totalBill >400){
		   surcharge =totalBill*0.15;
		}
		
 	    if(totalBill <100){
			 totalBill = 100;
		 }
		 
		 else {
			 totalBill +=surcharge;
		 }
		 printf("\nElectricBill\n");
         printf("Customer ID:%d\n",customerID); 
		 printf("Customer Name: %s\n",customerName); 
         printf("Units Consumed: %d\n",unitsConsumed);
		 printf("Charge Per Unit: %.2f kshs\n",chargePerUnit);		                     
         printf("Total Amount To Pay: %.2f kshs\n",totalBill);
	
	
	
	return 0;
}