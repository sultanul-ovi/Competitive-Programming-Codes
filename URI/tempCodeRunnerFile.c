#include <stdio.h>

int main()
{
    float a, b, c, d, avg;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    avg = (2*a+3*b+4*c+d)/10;
    if (avg >= 7.0)
    {
        printf("Media: %.1f\n", avg);
        printf("Aluno aprovado.\n");
    }
    else if (avg < 5.0)
    {
        printf("Media: %.1f\n", avg);
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Media: %.1f\n", avg);
        printf("Aluno em exame.\n");
        printf("Nota do exame: \n");
        float x;
        scanf("%f", &x);

        if ((avg+x)/2>=5.0)
        {
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", (avg+x)/2);

        }
        else
        {
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", (avg+x)/2);
        }
    }
    return 0;
}