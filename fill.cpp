#include<stdio.h>
main()
{
	int weight,power;
	double speed;
	scanf("%lf %d %d",&speed,&weight,&power);
	
	if(speed<=4.5&&weight>=200&& weight<=299&&power<=499&&power>=300)
	printf("Wide Receiver Quarterback");
	else if (speed<=4.5&&weight>=300&&power>=500)
	printf("Wide Receiver Lineman Quarterback");
	else if (speed<=5.0 && weight>=200&& weight<=299&&power<=499&&power>=300)
	printf("No positions");
	
	else if (speed<=4.5&&weight>=150&&power>=200)
	printf("Wide Receiver");
	else if (speed>5.0&&speed<=6.0&&weight>=300&&power>=500)
	printf("Lineman");
	else 
	printf("No positions");
	}
