#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("S(n) = ");
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%d^2 ", i);
        else
            printf("%d^2 + ", i);
        sum += pow(i, 2);
    }
    printf("= %d", sum);

    return 0;
}