#include <stdio.h>

int main(){
	float hourlywage;
	float hours;
	double grosspay;
	float taxes;
	double netpay;
	
	//promt the user to enter hours worked and hourly wage
	printf("Enter hours worked in a week \n");
	scanf("%f",hours);
	
	printf("Enter hourly wage \n");
	scanf("%f",hourlywage);
	
	//caculation of grosspay
	
	if(hours <=40){
		grosspay = hours* hourlywage; 
	}else
	{
		grosspay = 40 * hourlywage + (hours - 40) * hourlywage * 1.5;
	}
	
	//caculation of taxes
	if (grosspay <= 600){
		taxes = grosspay * 1.5 + (grosspay - 600) * 0,20;
	}
	//caculation of netpay
	netpay = grosspay - taxes;
	
	//printing the values of grosspay,taxes and netpay
	
	printf("the grosspay %lf \n",grosspay);
	printf("the taxes \n",taxes);
	printf("the net pay\n",netpay);
	
	return 0;
}