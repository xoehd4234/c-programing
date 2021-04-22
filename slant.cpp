#include<stdio.h>

main()
{
	int x,y,x1,y1,min;
	
	scanf("%d %d",&x,&y);
	scanf("%d %d",&x1,&y1);
	
	min = (y1-y)/(x1-x);
	
	printf("%d %d",min,(y-x*min));
}
