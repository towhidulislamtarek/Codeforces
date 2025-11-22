#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n == 1 || n == 2)
        {
            printf("0\n");
        }
        else
        {
            int x;
            x = (n - 1) / 2;
            printf("%d\n", x);
        }
    }
    return 0;
}