#include <stdio.h>
#include <math.h>

int main()
{
    int n, x, sum = 0, tich = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("S(n) = ");
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%d^%d ", x, 2 * i);
        else
            printf("%d^%d + ", x, 2 * i);
        sum += pow(x, 2 * i);
    }
    printf("= %d", sum);

    return 0;
}