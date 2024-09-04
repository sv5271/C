#include<stdio.h>
int main () {
    int p,n;
    float r,si;
    printf("enter the values of p = ");
    scanf("%d",&p);
    printf("enter the values of n = ");
    scanf("%d",&n);
    printf("enter the values of r = ");
    scanf("%f",&r);

    si=p*n*r/100;
    printf(" total interset is = %f",si);
    return 0 ;

}