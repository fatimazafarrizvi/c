#include<stdio.h>

int main()
{
    int arr[100], n, element;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);

    printf("Enter the element to be found: ");
    scanf("%d",&element);

    int ans = binary_search(arr, 0, n-1, element);

    if(ans==-1)
      printf("Element not found");

    else
      printf("Element found at position %d.", ans+1);

    return 0;
}

int binary_search(int arr[], int start_index, int end_index, int element)
{
    if(end_index>=start_index)
    {
        int mid = start_index + (end_index-start_index)/2;

        if(arr[mid]==element)
           return mid;

        if(arr[mid]>element)
           return binary_search(arr, start_index, mid-1, element);

        if(arr[mid]<element)
           return binary_search(arr, mid+1, end_index, element);
    }
    return -1;
}

/*
Enter the size of array: 5
Enter the array elements: 1 2 3 4 5
Enter the element to be found: 2
Element found at position 2.*/
