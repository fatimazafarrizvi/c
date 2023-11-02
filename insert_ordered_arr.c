//Write a c program to insert an element into an orderd array. after insertion operation the array should be orderd.

#include<stdio.h>

void insert(int a[], int *n, int key);

int main()
{
    int a[10],n,key,i;

    printf("Enter the no. of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the key element: ");
    scanf("%d",&key);

    printf("Array after inserting he key element: ");
    insert(a,&n,key);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void insert(int a[], int *n, int key)
{
    int i;

    for(i=*n-1;i>=0 && a[i]>=key;i--)
    {
        a[i+1]=a[i];
    }
    a[i+1]=key;
    ++*n;
}

/*Enter the no. of elements in the array: 5
Enter the array elements: 
1 2 3 4 5
Enter the key element: 6
Array after inserting he key element: 1 2 3 4 5 6 

Enter the no. of elements in the array: 5 
Enter the array elements:
1 2 4 5 6 (will traverse till 2 which is smaller then 3 so it comes out of loop and at i+1 3 is inserted)
Enter the key element: 3
Array after inserting he key element: 1 2 3 4 5 6*/
