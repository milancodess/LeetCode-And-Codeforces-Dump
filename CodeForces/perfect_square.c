#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d", i * i);
            if (i < n)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
