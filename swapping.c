#include<stdio.h>
#include<conio.h>
int main(){
	printf("Swapping of two integers\n");
	int a,b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	a= a+b;//value of a becomes a+b
	b= a-b;//here a= a+b so now b= a-b = (a+b)-b = a
	a= a-b;//a= a-b = (a+b)-a = b
	printf("a=%d and b=%d",a,b);
	return 0;
}
