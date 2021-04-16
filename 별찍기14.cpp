#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=9;i++){
		
		if(i<5){
			for(j=1;j<i;j++){
				putchar(' ');
			}
			for(j=1;j<=6-i;j++){
				putchar('*');
				
			}
				
			}
		else
		for(j=1;j<10-i;j++){
			putchar(' ');
			
		}
		for(j=1;j<=i-4;j++){
			putchar('*');
		}
			putchar('\n');
		}
	 
	}

