//THE LENGTH AND BREATH OF A RECTANGLE AND REDIUS OF A CIRCLE ARE INPUT THROUGH THE KEYBOARD . //
//WRITE THE PROGRAME TO CALCULATE THE AREA AND PERIMETER OF A RECTENGLE ,AND THE AREA AND CIRCUFERENCE OF THE CIRCLE//

#include<stdio.h>
int main() {
    int l , b , r ;
    float A,P,C, A1;
    printf("Enter the breadh :");
    scanf("%d", &b);
    printf("Enter the length :  ");
    scanf("%d",&l);
    printf("enter radius : ");
    scanf("%d",&r); A=l*b;
    printf("area of rectangle is = %f\n",A);P = 2*(l+b);
    printf("perimeter of rectengle is = %f\n",P);C=2*3.14*r;
    printf("circumference of circle is = %f\n",C);A1=3.14*r*r;
    printf("area of a circle is = %f\n",A1);
    
    return 0;
}