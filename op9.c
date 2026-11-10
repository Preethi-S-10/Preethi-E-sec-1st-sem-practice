//Read the five marks and an integer target average, and print the minimum marks the student must score in a sixth subject so that the average of all six subjects is at least the target.
#include<stdio.h>
int main(){
          int m1,m2,m3,m4,m5,m6,avg;
          scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&avg);
          m6=(6*avg)-(m1+m2+m3+m4+m5);
          printf("%d",m6);
         }
