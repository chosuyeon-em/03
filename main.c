# include <stdio.h>

int main(void)
{
    char c;
    int i;

    printf("enter a character : ");
    scanf("%c", &c);

    i = c + 1;
    printf("the next character of %c (%d) is %c (%d)", c, c, i, i);

    return 0;
}