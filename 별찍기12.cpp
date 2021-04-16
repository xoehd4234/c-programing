#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=9;i++){
		if(i<6){
		
		for(j=1; j<=i; j++){
			putchar('*');
			
		}
	}
	    else 
	    for(j=1;j<=10-i;j++){
	   	    putchar('*');
	}
	
		putchar('\n'); 
	}
}
