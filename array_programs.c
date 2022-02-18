//Insert an element...
#include <stdio.h>

int main()
{
    int arr[100], pos, i, n, value;

    printf("Enter number of elements : \n");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter location where you want to insert : ");
    scanf("%d", &pos);

    printf("Enter the value to insert : ");
    scanf("%d", &value);

    for (int i = n - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];

    arr[pos - 1] = value;

    printf("New Array : \n");

    for (int i = 0; i <= n; i++)
        printf("\n%d", arr[i]);

    return 0;
}

//delete element at given index
#include <stdio.h>

int main()
{
    int arr[100], pos, i, n, value;

    printf("Enter number of elements : \n");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter location where you want to delete : \n");
    scanf("%d", &pos);

    if (pos >= n + 1)
        printf("Delete not possible!");
    else
        for (int i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];

    printf("New Array : \n");

    for (int i = 0; i < n - 1; i++)
        printf("\n%d", arr[i]);

    return 0;
}

//reverse an array
#include <stdio.h>
int main()
{
    int arr[100], pos, n, i, temp;

    printf("Enter number of elements : \n");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0, j = n - 1; i < (n / 2); i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("New Array : \n");

    for (int i = 0; i < n; i++)
        printf("\n%d", arr[i]);
}

//print odd no and even no seprately
#include <stdio.h>
int main()
{
    int arr[100], pos, n, i, temp;

    printf("Enter number of elements : \n");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Even number :");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("\n%d", arr[i]);
        }
        else
            continue;
    }
    printf("\nOdd number : ");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("\n%d", arr[i]);
        }
        else
            continue;
    }
}

//2nd smallest element number in array
#include <stdio.h>
int main()
{
    int arr[100], pos, n, i, temp;

    printf("Enter number of elements : \n");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = arr[i];
            }
        }
    }
    printf("%d", arr[1]);
}

//repested element and count
#include <stdio.h>
int main()
{
    int arr[100], pos, n, i, temp, count;

    printf("Enter number of elements : \n");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == 0)
            {
                continue;
            }
            if (arr[i] == arr[j])
            {
                count++;
            }
            arr[j] = 0;
        }
    }
    if (count > 1)
    {
        printf("\n %d Repeated %d times ", arr[i], count);
    }
}

//swap any 2 number using pointer
#include <stdio.h>
int main()
{
    int arr[100], n, i, temp;

    printf("Enter number of elements : \n");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    temp = *(arr + 1);
    *(arr + 1) = *(arr + 3);
    *(arr + 3) = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

//rotate array elements k times
#include <stdio.h>
int main()
{
    int arr[100], n, i, temp;

    printf("Enter number of elements : \n");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 2];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

//Sum of array elements
//1 = sum of odd number
//2 = sum of even number
//3 = sum of positive number
//4 = sum of neagtive number

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