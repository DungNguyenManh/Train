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
            printf("%d^%d ", x, i);
        else
            printf("%d^%d + ", x, i);
        sum += pow(x, i);
    }
    printf("= %d", sum);

    return 0;
}