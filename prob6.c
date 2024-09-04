//conside r a currency system in which thrre are notes of six denominations , namely Re. 1, rs2, rs 5, rs 10,
//rs 50, rs 100, . if a sum of rs.N is entered through the keyboard , write the programe to sum of
//compute the smallest number of notes theat will combine ton give rs.n
#include<stdio.h>
#include<math.h>
int N, no1,no2,no5,no10,no50,no100,total;
int main () {
    printf("Enter the sum of money is : ");
    scanf("%d",&N);
    no100=N/100;
    N=N%100;
    no50=N/50;
    N=N%50;
    no10=N/10;
    N=N%10;
    no5=N/5;
    N=N%5;
    no2=N/2;
    N=N%2;
    no1=N/1;
    N=N%1;
    total = no100+no50+no10+no5+no2+no1;

    printf ("total no of notes is = %d\n",total);

    return 0;
}