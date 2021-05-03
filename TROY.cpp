#include<stdio.h>
main()
{
	int tree,manu,minus;
		scanf("%d %d",&manu,&tree);
		
			minus = tree / 1000;
			
			if ( minus>manu)
				printf("O");
			
			else
				printf("X"); 
				
}
