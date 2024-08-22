#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    int case_num = 1;

    while (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        if (a == 0 && b == 0 && c == 0)
            break;
        printf("Case %d :", case_num++);
        printf("%d", a / b);
        if (c > 0)
        {
            printf(".");
            a = a % b;
            for (int i = 0; i < c; i++)
            {
                if (i == c - 1)
                {
                    a *= 10;
                    int tmp = a / b;
                    a = a % b;
                    if(a * 10 / b >= 5) tmp++;
                    printf("%d", tmp);
                }
                else
                {
                    a *= 10;
                    printf("%d", a / b);
                    a = a % b;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
