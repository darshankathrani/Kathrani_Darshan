#include<stdio.h>
void main(){
	char ch;
	printf("enter character  :");
	scanf("%c",&ch);

	if (ch>=97&&ch<=122){
		printf("lower case");
	}
	else if(ch>=65&&ch<=90){
		printf("upper case");
	}
	else if(ch>=48&&ch<=57){
		printf("digit");
	}
	else{
		printf("%c is special character");
	}
}
