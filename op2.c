//Read P, R and T, and print the compound interest earned and the final amount, both rounded to two decimal places.
#include<stdio.h>
int main(){
	int p, r, t;
	float amount,ci,base;
	scanf("%d %d %d",&p,&r,&t);
	base=(float)1.0+r/100.0;
	for(int i=1;i<t;i++)
		base*=base;
	amount=p*base;
	ci=(float)amount-p;
	printf("Compound interest: %.2f\nAmount: %.2f",ci,amount);
}
