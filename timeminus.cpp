#include<stdio.h>
main()
{
	int h,m;
	scanf("%d %d",&h,&m);
	
	if (h <= 0&&m < 45){
	
	h = h -1;
	m = 60+m-45;
	printf("%d %d",h,m);}
	
	else if (h <= 23 && m < 45){
	
	h = h-1;
	m = 60+m-45;
	printf("%d %d",h,m);}
	
	else if(h <= 23 && m >= 45){
	
	h = h ;
	m = m -45;
	printf("%d %d",h,m);
}
	
	else 
	return 0 ;
	
	
}
