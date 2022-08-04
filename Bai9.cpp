#include <stdio.h>
#include <math.h>

int main()
{
    int n, tich = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("T(n) = ");
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%d ", i);
        else
            printf("%d * ", i);
        tich *= i;
    }
    printf("= %d", tich);

    return 0;
}