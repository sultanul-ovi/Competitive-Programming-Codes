#include<stdio.h>

int main(){

    int n=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;

    scanf("%d", &n);

    n100 = n/100;
    n50 = (n%100)/50;
    n20 = ((n%100)%50)/20;
    n10 = (((n%100)%50)%20)/10;
    n5 = ((((n%100)%50)%20)%10)/5;
    n2 = (((((n%100)%50)%20)%10)%5)/2;
    n1 = ((((((n%100)%50)%20)%10)%5)%2)/1;


    

    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);


    return 0;
}