#include <stdio.h>
#include <stdlib.h>

void p(double *);

int main()
{
    int n; //層數
    int i, j; //迴圈用變數
    double d[500];

    do
    {
        printf("你要列出幾層？（不超過1000）\n > ");
        scanf("%d", &n);
        if(n > 1000 || n < 0)
        {
            printf("輸入錯誤，請重新輸入。\n");
        }
    }
    while(n > 1000 || n < 0);

    for(i = 0; i < 50; ++i)
    {
        d[i] = 0;
    }

    p(d);

    if(n > 1)
    {
        d[0] = 1;
        p(d);

        for(i = 1; i < n - 1; ++i)
        {
            for(j = i / 2 + i % 2; j > 0; --j)
            {
                if(d[j] == 0)
                {
                    d[j] = d[j - 1] * 2;
                }
                else
                {
                    d[j] = d[j] + d[j - 1];
                }
            }
            p(d);
        }
    }

    return 0;
}

void p(double *d)
{
    int i;
    for(i = 0; i < 50 && d[i]; ++i)
    {
        printf("%.0lf\t", d[i]);
    }
    if(i == 0)
    {
        printf("%.0lf\n", 1);
        return;
    }
    i -= 1 + (1 - (int)d[1] % 2);
    i = i < 0? 0: i;

    for(; i >= 0; --i)
    {
        printf("%.0lf\t", d[i]);
    }
    printf("\n");
}
