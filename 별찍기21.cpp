#include<stdio.h>
main()
{
	int i,j;
	
	printf("Q21.\n");
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			putchar(' ');
		}
		for(j=1;j<=12-(2*i+1);j++){
			putchar('*');
		}
            putchar('\n');
				}
	for(i=1;i<=4;i++){
		for(j=1;j<=5-i;j++){
			putchar(' ');
		}
		for(j=1;j<=2*i+1;j++){
			putchar('*');
		}
	        putchar('\n');
	}
}
