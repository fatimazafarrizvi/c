//write a program to remove an element from a specified element in the array.
#include<stdio.h>

void del(int a[], int *n, int key);

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

    printf("Array after removing he key element: ");
    del(a,&n,key);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void del(int a[], int *n, int key)
{
    int i ,pos;

    for(i=0;i<=*n-1;i++)
    {
        if(a[i]==key)
          pos = i;
    }
    
    for(i=pos;i<=*n-1;i++)
       a[i]=a[i+1];

    --*n;
}

/*
Enter the no. of elements in the array: 5
Enter the array elements: 
1 2 5 3 4
Enter the key element: 5
Array after removing he key element: 1 2 3 4 */