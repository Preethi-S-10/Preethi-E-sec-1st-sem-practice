//Read a non-negative integer N and a bit position i (counted from the right, starting at 0). Print 1 if the bit at position i in the binary form of N is 1. Otherwise print 0.
#include<stdio.h>
int main(){
          int n,i;
          scanf("%d %d",&n,&i);
          printf("%d",(n>>i)&1);
         }
