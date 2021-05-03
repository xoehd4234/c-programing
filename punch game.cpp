#include<stdio.h>
main()
{
	int punch=10,kick=15,skill=30,manypun=40,thr=45;
	int punch1,kick1,skill1,manypun1,thr1;
	int totaldamage,totaltry;
	scanf("%d %d %d %d %d",&punch1,&kick1,&skill1,&manypun1,&thr1);
	
	totaltry=punch1+kick1+skill1+manypun1+thr1;
	totaldamage = ((punch1*punch)+(kick1*kick)+(skill1*skill)+(manypun1*manypun)+(thr1*thr));
	
	if(totaltry>10)
	printf("time out");
	else if (totaldamage>=100)
	printf("you win");
	else 
	printf("game over");
	
}
