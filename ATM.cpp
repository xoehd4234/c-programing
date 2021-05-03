#include<stdio.h>
#include<stdlib.h>


main()
{
	int money; 
	double inmon,bible;
	
	
	scanf("%d %lf",&money,&inmon);
	
	money = double(money);
	
	if(inmon-money <0 ) 
	printf("%.2lf",inmon);
	
	else if(inmon-money>0&&money%5==0){
		inmon = inmon-money-0.5;
		printf("%.2lf",inmon);
		
	}
	else 
	printf("%.2lf",inmon);
}
