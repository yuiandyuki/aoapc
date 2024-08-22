#include<stdio.h>
int main(int argc, char const *argv[])
{
    freopen("data.in", "r", stdin);
    // freopen("data.out", "w", stdout);
    int mod = 105;
    int a, b, c, kase = 0;
    while(scanf("%d%d%d", &a, &b, &c) != -1){
        int ans = (a * 70 + b * 21 + c * 15) % mod;
        if(ans < 10 || ans > 100) printf("Case %d: No answer\n", ++kase);
        else printf("Case %d: %d\n", ++kase, ans);
    }
    printf("hello world");
    return 0;
}
