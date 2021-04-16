#include<stdio.h>

main()
{ int i,j,k;

/*  for (i=1;i<=5;i++){
  	printf("\n");
	  printf("%d",6-i);
	 for(j=6-i+1;j<=10-i;j++){
	 	printf("%d",j);
	 }
  } */
  
  for (i = 5; i > 0; i--) {
	  	for(j = 0; j < 5; j++) 
	  		printf("%d", i+j);
	  	printf("\n");
	}
  
}
