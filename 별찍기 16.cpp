#include<stdio.h>

main()
{
	int i,j;
	
	printf("Q16.\n");
	
	
	
  for(i=0;i<=4;i++){
  	for(j=1;j<5-i;j++){
  		putchar(' ');
  	}
	    
	for(j=1;j<=2*i+1;j++){
		putchar('*');
	}
	
	
  
  putchar('\n');
}
   
 
}
