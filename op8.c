//Read a four-digit positive integer and print the number obtained after interchanging its first and last digits.
#include<stdio.h>
int main(){
	int n,r;
	scanf("%d",&n);
	r=((n%10)*1000)+(n%1000)+(n/1000)-(n%10);
	printf("%d",r);
}
