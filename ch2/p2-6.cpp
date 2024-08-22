#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int x, y, z, a[10], i, s;
    memset(a, 0, sizeof(a));
    for(x = 123; x < 333; x++){
        y = 2 * x;
        z = 3 * x;
        a[x/100]=a[x/10%10]=a[x%10]=1;
        a[y/100]=a[y/10%10]=a[y%10]=1;
        a[z/100]=a[z/10%10]=a[z%10]=1;
        s = 0;
        for(i = 1; i < 10; i++)
            s += a[i];
        if(s == 9)
            printf("%d %d %d\n", x, y, z);
        memset(a, 0, sizeof(a));
    }
    return 0;
}
