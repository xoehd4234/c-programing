#include<stdio.h>
main()
{
	int num,num1;
	
    scanf("%d %d",&num,&num1);
	if(num%2==0 && num1%2==0){
			printf("even+even=even\n");
			printf("even*even=even");
	}
	else if (num % 2==0 && num1%2==1){
			printf("even+odd=odd\n");
			printf("even*odd=even");
		}
	else if (num % 2==1 && num1%2==0){
			printf("odd+even=odd\n");
			printf("odd*even=even");
	}
	else if (num%2==1 && num1%2 == 1){
			printf("odd+odd=odd\n");
			printf("odd*odd=odd");
		
	}
	else 
	return 0;
	
    			
	
	
}
