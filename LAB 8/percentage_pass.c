#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,per;
	printf("enter value of s1 : ");
	scanf("%d",&s1);
	printf("enter value of s2 : ");
	scanf("%d",&s2);
	printf("enter value of s3 : ");
	scanf("%d",&s3);
	printf("enter value of s4 : ");
	scanf("%d",&s4);
	printf("enter value of s5 : ");
	scanf("%d",&s5);
	per=(s1+s2+s3+s4+s5)/5;
	if(per<=35)
	{
		printf("%d is fail",per);
    }
	else if(per>=36 && per<=45)
	{
		printf("%d is pass",per);
	}
	else if(per>=46 && per<=60)
	{
		printf("%d is second class",per);
	}
	else if(per>=61 && per<=70)
	{
		printf("%d is first class",per);
	}
	else 
	{
		printf("%d is distinction",per);
	}
}
