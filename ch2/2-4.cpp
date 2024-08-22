#include<stdio.h>
int main(int argc, char const *argv[])
{
    long long n;
    scanf("%lld", &n);
    int cnt = 0;
    while(n != 1){
        if(n % 2 == 1){
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
