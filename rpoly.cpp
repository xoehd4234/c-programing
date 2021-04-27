#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.1415926535


double area(double r,double n)
{
    double s = 1/2*r*r*sin((360/n)*(pi/180));
	return s;	
}
main()
{
	double r,n;
	scanf("%lf %lf",&r,&n);
	
	printf("%.3lf",area(r,n));
	
}
