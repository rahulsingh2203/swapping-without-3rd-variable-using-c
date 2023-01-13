#include<stdio.h>
#include<conio.h>

void main(){
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("\nenter the value of b:");	
	scanf("%d",&b);
	printf("\nBefore swapping, a: %d and b: %d",a,b);
	//let a = 20, b = 30
	//a = (a+b); // a = 20 + 30; a = 50
	//b = (a-b); // b = 50 - 30; b = 20
	//a = (a-b); // a = 50 - 20; a = 30
	a = a*b; //a = 20*30; a = 600
	b = a/b; //b = 600/30; b = 20
	a = a/b; //a = 600/20; a = 30
	
	printf("\nAfter swapping, a: %d and b: %d",a,b);
	getch();
}
