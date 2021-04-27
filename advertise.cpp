#include<stdio.h>

main()
{
	int ad,nad,x;
	
	scanf("%d %d %d",&ad,&nad,&x);
	
	if(ad<nad&&nad>x)
		printf("advertise");
	else if(ad>nad&&ad>x)
		printf("do not advertise");
	else
		printf("does not matter");
}
