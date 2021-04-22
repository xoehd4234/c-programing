#include<stdio.h>
main()
{
	int sell,bonus1,empty1,bonus2,empty2,totalsell,totalempty;
	
	scanf("%d",&sell);
	
	bonus1 = sell / 4;
	empty1 = sell%4;
	
	bonus2 = bonus1/4;
	empty2 = bonus1%4;
	
	totalsell = sell + bonus1 + bonus2; 
	totalempty= empty1+empty2;
	
	
	printf("%d %d",totalsell,totalempty);
}
