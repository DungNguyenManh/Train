#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("S(n) = ");
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%d ", i);
        else
            printf("%d + ", i);
        sum += i;
    }
    printf("= %d", sum);

    return 0;
}