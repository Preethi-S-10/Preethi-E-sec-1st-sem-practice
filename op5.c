#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	float r1,r2;
	scanf("%d %d %d",&a,&b,&c);
	d=(b*b)-(4*a*c);
	r1=(float)(-b+sqrt(d))/(2.0*a);
	r2=(float)(-b-sqrt(d))/(2.0*a);
	printf("Discriminant: %d\nRoots: %.2f %.2f",d,r1,r2);
}

