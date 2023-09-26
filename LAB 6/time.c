#include<stdio.h>
void main(){
	int h,m,s;
	printf("enter value of second : ");
	scanf("%d" ,&s);
	h=s/3600;
	m=(s%3600)/60;
	s=(s%3600)%60;
	printf("time=%02d:%d:%d",h,m,s);
}
