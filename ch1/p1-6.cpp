#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b ,&c);
    if(a < b) {t = a; a = b; b = t;}
    if(a < c) {t = a; a = c; c = t;}
    if(b < c) {t = b; b = c; c = t;}
    if(b + c <= a) printf("no a triangle\n");
    if(a * a == b * b + c * c) printf("yes\n");
    else printf("no\n");
    return 0;
}
