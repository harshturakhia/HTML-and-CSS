#include <stdio.h>
int main()
{
    int arr[100], n, i, temp;

    printf("Enter number of elements : \n");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int even = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] > 0)
        {
            even = even + arr[i];
        }
    }
    printf("Sum of even number : %d\n", even);

    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] > 0)
        {
            odd = odd + arr[i];
        }
    }
    printf("Sum of odd number : %d\n", odd);

    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos = pos + arr[i];
        }
    }
    printf("Sum of positive number : %d\n", pos);

    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg = neg + arr[i];
        }
    }
    printf("Sum of positive number : %d\n", neg);
}