#include <stdio.h>

bool KT_ElementNumber(int n);

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (KT_ElementNumber(n))
        printf("%d la so nguyen to", n);
    else
        printf("%d ko phai la so nguyen to", n);

    return 0;
}

bool KT_ElementNumber(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}