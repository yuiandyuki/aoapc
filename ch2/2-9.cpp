#include<stdio.h>
#define INF 1000000000
int main(int argc, char const *argv[])
{
    int x, n = 0;
    int kase = 0;
    while(scanf("%d", &n) == 1 && n)
    {
        int s = 0;
        int min = INF, max = -INF;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            s += x;
            if(x < min) min = x;
            if(x > max) max = x;
        }
        if(kase) printf("\n");
        printf("Case %d: %d %d %.3f\n", ++kase, min, max, (double)s/n);
    }
    return 0;
}
