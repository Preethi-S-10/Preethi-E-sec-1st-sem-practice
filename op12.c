//Read a positive integer and print 1 if it is divisible by both 3 and 5 but not by 7. Otherwise print 0.
#include<stdio.h>
int main(){
          int n;
          scanf("%d",&n);
          printf("%d",(n%3==0)&&(n%5==0)&&(n%7!=0));
         }
