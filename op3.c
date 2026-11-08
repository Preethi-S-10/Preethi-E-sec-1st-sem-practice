//A sum P was lent for T years and earned a simple interest of SI. Read P, SI and T, and print the annual rate of interest in percent, rounded to two decimal places.
#include<stdio.h>
int main(){
	int p, si, t;
	float r;
	scanf("%d %d %d",&p,&si,&t);
	r=(100*si)/(p*t);
	printf("%.2f",r);
}

