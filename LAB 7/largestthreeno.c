#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter value of a : ");
	scanf("%d",&a);
	printf("enter value of b : ");
	scanf("%d",&b);
	printf("enter value of c : ");
	scanf("%d",&c);
	if (a>b && a>c){
		printf("%d is largest",a);
	}
	else if (b>a && b>c){
		printf("%d is largest",b);
	}
	else{
		printf("%d is largest",c);
	}
}
