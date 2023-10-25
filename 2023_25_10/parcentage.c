#include <stdio.h>

int main()
{
    float phy, chem, math, bio, eng, percentage;
    printf("Enter number of 5 subjects\n : ");
    scanf("%f%f%f%f%f", &phy, &chem, &math, &bio, &eng);

    percentage = ((phy + chem + math + bio + eng) / 500) * 100;

    printf("Percentage of 5 subject is %.2f ", percentage);

    return 0;
}
