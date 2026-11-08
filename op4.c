//Read the radius r and height h of a closed cylinder and print its volume and its total surface area, each rounded to two decimal places.
#include<stdio.h>
int main(){
	int r, h;
	float v,tsa;
	scanf("%d %d",&r,&h);
	v=(float)3.14159*r*r*h;
	tsa=(float)2*3.14159*r*(r+h);
	printf("Volume: %.2f\nTotal surface area: %.2f",v,tsa);
}

