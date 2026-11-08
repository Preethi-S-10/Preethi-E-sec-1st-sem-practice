//The bill of a household is the cost of the units consumed plus a fixed monthly charge, and a tax of T percent is then added on this total. Read the units consumed, the rate per unit, the fixed charge and T, and print the final bill rounded to two decimal places.
#include<stdio.h>
int main(){
	int unit,fc,t;
	float r,bill;
	scanf("%d %f %d %d",&unit,&r,&fc,&t);
	bill=((r*unit)+fc) + (((r*unit)+fc)*t)/100;
	printf("%.2f",bill);
}

