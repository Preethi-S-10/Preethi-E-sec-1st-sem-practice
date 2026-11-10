//A prize amount is to be shared among three people in the ratio a : b : c. Read the amount and the values a, b and c, and print the share of each person.
#include<stdio.h>
int main(){
          int a,b,c,n;
          scanf("%d%d%d%d",&n,&a,&b,&c);
          printf("Price of person a: %d\n",a*n/(a+b+c));
          printf("Price of person b: %d\n",b*n/(a+b+c));
          printf("Price of person c: %d\n",c*n/(a+b+c));
         }
