#include<stdio.h>
main()
{
	int year,moment,day,total;
	scanf("%d %d %d",&year,&moment,&day);
	
	total = year + moment + day;
	
	if(total%10 == 0)
	printf("운수대통!");
	else
	printf("노력하세요!");
}
