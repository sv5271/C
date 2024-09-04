// area of tringle 
#include<stdio.h>
#include<math.h>
float a,b,c,s,A;
int main() {
    printf("enter a first side of tringle: ");
    scanf("%f",&a); 
    printf("enter a  second side of tringle: ");
    scanf("%f",&b);
    printf("enter a third side of tringle: ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    A= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of tringle is = %f\n",A);
     return 0 ;
}