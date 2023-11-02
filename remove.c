//write a program to remove an element from a specified position in the array.

#include<stdio.h>

void del(int a[], int *n, int pos);

int main()
{
    int a[10],n,pos,i;

    printf("Enter the no. of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the position of the key element: ");
    scanf("%d",&pos);

    printf("Array after removing he key element: ");
    del(a,&n,pos);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void del(int a[], int *n, int pos)
{
    for(int i=pos-1;i<*n-1;i++)
       a[i]=a[i+1];

    --*n;
}
/*
Enter the no. of elements in the array: 5
Enter the array elements: 
1 2 7 3 4
Enter the position of the key element: 3
Array after removing he key element: 1 2 3 4 */