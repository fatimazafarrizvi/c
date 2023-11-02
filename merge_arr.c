//write a c program to merge tewo ordered arrays into a single ordered array

#include<stdio.h>



void merge(int *a, int *b, int *c, int n, int m);

int main()
{
    int a[10], b[10], c[100], n, m, k, i, j;

    printf("Enter the no. of elements of the 1st array: ");
    scanf("%d",&n);

    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the no. of elements of the 2nd array: ");
    scanf("%d",&m);

    printf("Enter the array elements: \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }

   k = n + m;
   printf("Array after merging: ");
   merge(a,b,c,n,m);
   for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}

void merge(int *a, int *b, int *c, int n, int m)
{
    int i=0, j=0, k=0;

    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            c[k] = a[i];
            i++;
        }

        else if(b[j]<=a[i])
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    while(i<n)
         c[k++] = a[i++];
    while(j<m)
         c[k++] = b[j++];
}

/*Enter the no. of elements of the 1st array: 5
Enter the array elements: 
1 2 3 4 5
Enter the no. of elements of the 2nd array: 5
Enter the array elements:
6 7 8 9 10
Array after merging: 1 2 3 4 5 6 7 8 9 10*/