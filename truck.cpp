#include<stdio.h>

main()
{ int oner,twor,thrr,car;
    car = 168;
	scanf("%d %d %d",&oner,&twor,&thrr);
	
	if ( car<oner && car<twor && car<thrr )
		printf("NO CRASH");
	else if (car > oner)
		printf("CRASH %d",oner);
	else if (car> twor)
		printf("CRASH %d",twor);
	else if (car>thrr)
		printf("CRASH %d",thrr);
	else
	return 0;
	
	
		
	
}
