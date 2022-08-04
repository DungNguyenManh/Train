#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("S(n) = ");
    for (float i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%.0f/%.0f ", i, i + 1);
        else
            printf("%.0f/%.0f + ", i, i + 1);
        sum += i / (i + 1);
    }
    printf("= %.2f", sum);

    return 0;
}