//Read two integers a and b and swap their values using only arithmetic operators and without using any third variable.
#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d %d",&a, &b);
	printf("a = %d b = %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d b = %d",a,b);
}

