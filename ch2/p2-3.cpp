#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for(int i = n; i > 0; i--){
        int num = 2 * i - 1;
        for(int k = 0; k * 2 < 2 * n - 1 - num; k++)
            printf(" ");
        for(int k = 0; k < num; k++)
            printf("#");
        for(int k = 0; k * 2 < 2 * n - 1 - num; k++)
            printf(" ");
        printf("\n");
    }
    return 0;
}
