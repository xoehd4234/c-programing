#include<stdio.h>
#include<stdlib.h>
#include<math.h>



main()
{
	double d,p;
	double result = 0;
	
	scanf("%lf",&d);
	scanf("%lf",&p);
	result = d* (p/100)*(-1);
	printf("%.3lf\n",result);
	return 0;
	
}
