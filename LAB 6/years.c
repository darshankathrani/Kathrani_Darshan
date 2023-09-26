#include<stdio.h>
void main(){
	int D,Y,M,W;
	printf("enter number of days:");
	scanf("%d", &D);
	Y=D/365;
	D=D-(Y*365);
	M=D/365;
	D=D-(M*30);
	W=D/7;
	printf("year:months:weeks:day :%d:%d:%d:%d",Y,M,W,D);
}
