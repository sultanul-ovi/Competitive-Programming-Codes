#include<stdio.h>

int main(){


    char name[20];

    float profit,salary;

    scanf("%s", name);
    scanf("%f", &salary);
    scanf("%f", &profit);

    salary = (salary+.15*profit);

    printf("TOTAL = R$ %.2f\n", salary);

    return 0;
}