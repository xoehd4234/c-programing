#include<stdio.h>

main()

{
	int i,j,k;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5-i;j++){
		
		putchar(' ');
	}
	    for(j=1;j<=i;j++){
	    	putchar('*');
		}
		putchar('\n');
	}
}
