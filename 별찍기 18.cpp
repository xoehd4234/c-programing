#include<stdio.h>
 
 main(){
 	int i,j;
 	
 	printf("Q18.\n");
    for(i=0;i<=8;i++){
    	if(i<5){
    		for(j=1;j<5-i;j++){
    			putchar(' ');
			}
			for(j=1;j<=2*i+1;j++){
				putchar('*');
				
			}
			
		}
        else{
		
            for(j=1;j<=i-4;j++){
            	putchar(' ');
			}
			for(j=1;j<=18-(2*i+1);j++){
				putchar('*');
			}
		}
    putchar('\n');
	}
}
