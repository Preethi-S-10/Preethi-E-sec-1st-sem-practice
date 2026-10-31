#include<stdio.h>
#include<math.h>
int main(){
	int unit,fc,t;
	float r,bill;
	scanf("%d %f %d %d",&unit,&r,&fc,&t);
	bill=((r*unit)+fc) + (((r*unit)+fc)*t)/100;
	printf("%.2f",bill);
}

