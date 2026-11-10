//Read a duration in seconds and print it as hours, minutes and seconds,where minutes and seconds are both less than 60.
#include<stdio.h>
int main(){
          int n,sec,min,hr;
          scanf("%d",&n);
          hr=(n/3600);
          min=(n%3600)/60;
          sec=(n%3600)%60;
          printf("%d hours %d minutes %d seconds",hr,min,sec);
         }
