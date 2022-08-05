#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Uoc so le lon nhat cua %d la: ", n);
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            printf("%d ", i);
            break;
        }
    }

    return 0;
}