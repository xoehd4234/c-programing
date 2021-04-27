#include<stdio.h>

main()
{
	double a,b,c,d;
	
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	
	if(a/b > c/d)
		printf("1");
	else if(a/b < c/d)
		printf("-1");
	else
		printf("0");
	}
