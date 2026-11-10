//Read a positive integer N and print Yes if it is a power of two. Otherwise print No.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n > 0 && (n & (n - 1)) == 0)
        printf("Yes");
    else
        printf("No");
}
