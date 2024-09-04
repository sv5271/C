//if a five digit no enter by the keboard then,write a program to  reverse the number.
#include<stdio.h>
int n, d1,d2,d3,d4,d5,R;
int main () {
    printf( "Enter a five digit number: ");
    scanf("%d",&n);
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d5=n%10;
    R=d1*10000+d2*1000+d3*100+d4*10+d5;
    printf("The reverse number is = %d\n",R);
     return 0;
}