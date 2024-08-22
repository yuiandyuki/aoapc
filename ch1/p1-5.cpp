#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    double cost = n * 95;
    if (cost > 300)
        cost *= 0.85;
    printf("%lf\n", cost);
    return 0;
}
