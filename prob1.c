#include<stdio.h>
int main() {
    float km, m, cm, in, ft;
    printf("enter distance in kilometer: ");
    scanf("%f", &km);
    m = km*1000;
    cm = m*100;
    in = cm/2.54;
    ft = in/12;
    printf("distance in meters in = %f\n", m);
       printf("distance in centimeters in = %f\n", cm);
          printf("distance in inches in = %f\n", in);
             printf("distance in feet in = %f\n", ft);
             return 0;
}