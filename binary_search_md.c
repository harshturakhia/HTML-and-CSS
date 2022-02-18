#include<stdio.h>
int main() {
    int arr[20],n,i,flag=0,low=0,high,mid,value;
    printf("Enter size of the array:-\n");
    scanf("%d",&n);

    printf("Enter Array Elements:-\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the element to be search:-\n");
    scanf("%d",&value);

    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(value > arr[mid]) {
            low = mid + 1;
        }

        else if(value < arr[mid]) {
            high = mid - 1;
        }

        else {
            flag = 1;
            break;
        }
    }
    
    if(flag == 1) {
        printf("Element is found at %d\n",mid + 1);
    }

    else {
        printf("Element is not found\n");
    }

    return 0;
}