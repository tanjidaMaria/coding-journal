#include <stdio.h>
int main()
{
    int n;
    printf("print a number ");
    scanf("%d", &n);
    int mult = 1;

    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
