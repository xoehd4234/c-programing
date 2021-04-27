#include<stdio.h>

main()
{
	int c,d,e,f,g,a,h,C;
	
	scanf("%d %d %d %d %d %d %d %d",&c,&d,&e,&f,&g,&a,&h,&C);
	
	if(c<d && d<e && e<f && f<g && g<a && a<h && h<C)
		printf("ascending");
	else if(c>d && d>e && e>f && f>g && g>a && a>h && h>C)
		printf("descending");
	else 
		printf("mixed");
}
