#include <stdio.h>
#include <math.h>

int main()
{
    int n, x, sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("S(n) = ");
    for (int i = 0; i <= n; i++)
    {
        if (i == n)
            printf("%d^%d ", x, 2 * i + 1);
        else
            printf("%d^%d + ", x, 2 * i + 1);
        sum += pow(x, 2 * i + 1);
    }
    printf("= %d", sum);

    return 0;
}