#include<stdio.h>
int main(int argc, char const *argv[])
{
    double sum = 0;
    for(int i = 0; ; i++){
        double term = 1.0 / (2 * i + 1);
        if(i % 2 == 0) sum += term;
        else sum -= term;
        if(term < 1e-6) break;
    }
    printf("%.6f\n", sum);
    return 0;
}
