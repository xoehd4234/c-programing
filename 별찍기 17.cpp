#include<stdio.h>
 
 main(){
 	int i,j;
 	
 	printf("Q17.\n");
 	for(i=1;i<=5;i++){
 		for(j= 1 ;j<i;j++){
 			putchar(' ');
		 }
		for(j=1;j<=10-(2*i-1);j++){
			putchar('*');
			
		}
	 putchar('\n');
	 }
	 
 }
