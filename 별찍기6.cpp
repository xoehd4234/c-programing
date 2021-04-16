#include<stdio.h>

main()
{ int i,j,k;


for (i = 1; i <=5; i++){
	printf("\n");
	printf("%d",i);
	for(j=i+1;j<5+i;j++){
		printf("%d",j);
	} 
}
}
