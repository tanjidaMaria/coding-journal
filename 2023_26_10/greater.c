#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two number : ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d is greater than %d", num2, num1);
    }
    else
    {
        printf("both number are equal");
    }

    return 0;
}
