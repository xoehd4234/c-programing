#include<stdio.h>
#include<stdlib.h>


      

int max(int x,int y)
{     
	if(x<y)
		return y;
    else 
    	return x;
}



int min(int x,int y)
{    
	if(x<y)
		return x;
	else
    	return y;
}

main()
{   
	int x,y;

   scanf("%d %d",&x,&y);
   
 	if (min(x,y)< x )
 		printf("%d",x);
	else 
 		printf("%d",min(x,y));
	
}
