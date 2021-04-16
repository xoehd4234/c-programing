#include<stdio.h>

main()
{
	int i,j;
	 
	printf("Q19.\n");	
	for(i=0;i<=4;i++){
		for(j=1;j<=5-i;j++){
			putchar('*');
		}
		for(j=0;j<i;j++){
			putchar(' ');
		}
		for(j=0;j<=i;j++){
    		putchar(' ');
		}
		for(j=0;j<5-i;j++){
			putchar('*');
		}
		putchar('\n');
	
}
    for(i=0;i<=3;i++){
    	for(j=0;j<=i+1;j++){
		putchar('*');
		}
		for(j=0;j<3-i;j++){
			putchar(' ');
		}
		for(j=0;j<4-i;j++){
			putchar(' ');
		}
		for(j=0;j<=i+1;j++){
			putchar('*');
		}
		putchar('\n');
    }
    	
	
	

	
		
}
