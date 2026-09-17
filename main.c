# include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("enter the numerator : ");
    scanf("%d", &a);

    printf("enter the denominator : ");
    scanf("%d", &b);

    printf("The result of devision is %f\n", (float)a/b);

    return 0;
}