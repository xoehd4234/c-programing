#include<stdio.h>
main()
{
	int num,num1,num2;
	
	scanf("%d %d %d",&num,&num1,&num2);
	
	if(num>=num1 && num<=num2)
	printf("%d",num);
	else if(num1>=num && num1<=num2)
	printf("%d",num1);
	else if(num2>=num && num2<=num1)
	printf("%d",num2);
	else if(num<=num1 && num>=num2)
	printf("%d",num);
	else if(num1<=num && num1>=num2)
	printf("%d",num1);
	else if(num2<=num && num2>=num1)
	printf("%d",num2);
	else 
	return 0;
}
