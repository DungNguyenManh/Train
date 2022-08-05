#include <stdio.h>
#include <math.h>

bool KT_SoChinhPhuong(int n);

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (KT_SoChinhPhuong(n))
        printf("%d la so chinh phuong", n);
    else
        printf("%d ko phai la so chinh phuong", n);

    return 0;
}

bool KT_SoChinhPhuong(int n)
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (pow(i, 2) == n)
            return 1;
    }
    return 0;
}