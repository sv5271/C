//if a five digit number is input through the keyboard , write the programe to calculate the sum if its digits.
#include<stdio.h>
#include<math.h>
int main () { 
    int n,n1,n2,n3,n4,n5,sum;
    printf("Enter a five digit number : ");
    scanf ("%d",&n);
    n1=n%10;
    n=n/10;
    n2=n%10;
    n=n/10;
    n3=n%10;
    n=n/10;
    n4=n%10;
    n=n/10;
    n5=n%10;
    n=n/10;
    sum=n1+n2+n3+n4+n5 ;
    printf("sum of digits is = %d\n",sum);
     return 0;
}