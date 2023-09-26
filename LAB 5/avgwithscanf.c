#include<stdio.h>
void main(){
	int a,b,c,sum,avg;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	printf("enter value of c:");
	scanf("%d" ,&c);
	sum=a+b+c;
	avg=sum/3;
	printf("avg:%d",avg);
}
