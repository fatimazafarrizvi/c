// write a c program to remove duplicate elements from the an array

#include<stdio.h>
void dup(int a[], int *n);

int main()
{
    int a[10],n,i;

    printf("Enter the no. of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("Array after removing the duplicate: ");
   dup(a,&n);
   for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}

void dup(int a[], int *n)
{
    int i,j,k;

    for(i=0;i<*n-1;i++)
    {
        for(j=i+1;j<*n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<*n-1;k++)
                {
                    a[k]=a[k+1];
                }
                --*n;
                --j;
            }
        }
    }
}

/*
Enter the no. of elements in the array: 5
Enter the array elements: 
1 1 2 2 3
Array after removing the duplicate: 1 2 3 */