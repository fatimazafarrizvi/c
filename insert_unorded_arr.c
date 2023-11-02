#include<stdio.h>

void insert(int a[], int *n, int key, int pos);

//write a c program to insert an element in a specific position of an unsorted array.

int main()
{
    int a[10],n,key,pos,i;

    printf("Enter the no. of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the key element: ");
    scanf("%d",&key);

    printf("Enter the position of the key element: ");
    scanf("%d",&pos);

    printf("Array after inserting he key element: ");
    insert(a,&n,key,pos);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void insert(int a[], int *n, int key, int pos)
{
    for(int i =*n-1; i>=pos-1;i--) //going from back to front
    {
        a[i+1]=a[i]; //shifting elements forward to make space for new.
    }
    a[pos-1]=key; //placing the key on position
    ++*n; //since size of array has inc 
}

/*
Enter the no. of elements in the array: 5
Enter the array elements: 
1 5 2 7 3
Enter the key element: 6
Enter the position of the key element: 3
Array after inserting he key element: 1 5 6 2 7 3 */