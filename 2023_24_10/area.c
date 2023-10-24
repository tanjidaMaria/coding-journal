#include<stdio.h>
#include<math.h>

int main()
{
    float area, circum, r;
    printf("Enter redius :");
    scanf("%f", &r);

    area = 3.1416 * ( r * r);
    circum = 2 * 3.1416 *r;

    printf("the area of circle is %.2f\n", area);
    printf("the circumference of circle is %.2f", circum);
    return 0;
}

