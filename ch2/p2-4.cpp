#include<stdio.h>
int main(int argc, char const *argv[])
{
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
    int n = 0, m = 0, kase = 0;
    while(scanf("%d%d", &n, &m) != 2 || (n != 0 && m != 0)){
        double sum = 0.0;
        long long x;
        for(int i = n; i <= m; i++){
            x = i * i;
            sum += 1.0 / x;
        }
        printf("Case %d: %.7lf\n", ++kase, sum);
    }
    return 0;
}
