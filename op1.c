//Read a temperature in degrees Celsius (a real number) and print its equivalent in Fahrenheit and in Kelvin, both rounded to two decimal places.
#include<stdio.h>
int main(){
	float c,f,k;
	scanf("%f",&c);
	f=(c*9/5)+32;
	k=c+273.15;
	printf("%.2f %.2f",f,k);
}
