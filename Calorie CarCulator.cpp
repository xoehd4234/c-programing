//CALORIE CALCULATOR//

#include<stdio.h>
main()
{
	int burger1[5]={0,461,431,420,0};
	int drink1[5]={0,130,160,118,0};
	int side1[5]={0,100,57,70,0};
	int disert1[5]={0,167,266,75};
	int burger,drink,side,disert;
	int total;
	
	scanf("%d %d %d %d",&burger,&drink,&side,&disert);
	total = burger1[burger] +drink1[drink]+side1[side]+disert1[disert];
	printf("Your total Calorie count is %d",total);
}
