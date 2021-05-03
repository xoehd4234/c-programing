#include<stdio.h>
main()
{
	int year; 
	
	scanf("%d",&year);
	
	if(year<2000)
	printf("X");
	else if((year-2000)%8==0)
	printf("O");
	else
	printf("X");
}
