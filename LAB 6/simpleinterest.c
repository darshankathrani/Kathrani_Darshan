#include<stdio.h>
void main(){
	float principal,rate,time,interest;
	printf("Enter value of principal:");
	scanf("%f", &principal);
	printf("Enter value of rate:");
	scanf("%f", &rate);
	printf("Enter value of time:");
	scanf("%f", &time);
	interest=(principal*rate*time)/100;
	printf("value of interest = %f",interest);
}
