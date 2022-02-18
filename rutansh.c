//They should be in ascending order...
//If n elements then do (n-1)tries
//Time - Complexity = O(n`2)

#include<stdio.h>

int main()
{
    int n;
    printf( "Enter limit : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array : ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int counter = 1;

    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    printf("Displaying the array after sorting... ");
    printf("\n");

    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}