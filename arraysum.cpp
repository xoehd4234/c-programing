//array sum //
#include<stdio.h>

main()
{
int day;
int yunyear;

scanf("%d",&day);

if ( day%4 ==0 && day % 100 != 0 )
printf("YES");

else if(day % 400 == 0)
printf("YES");


else 
printf("NO"); 
	
	
}
