#include<stdio.h>
int main()
{   
    double f;
    double c;
    scanf("%lf", &f);
    c = 5 * (f - 32) / 9.0;
    printf("%.3lf", c);
    return 0;
}
