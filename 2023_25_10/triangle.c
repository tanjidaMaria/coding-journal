#include<stdio.h>
int main()
{
    float base, area, height;
    printf("Enter height :");
    scanf("%f", &height);
    printf("Enter base :");
    scanf("%f", &base);

    area = 0.5 * base * height;

    printf("The area of triangle is %.2f sq unit :", area);
    
    return 0;
}
