#include<stdio.h>
//int linear_search(int arr, int value, int index, int n);
int main()
{
    int n, value, m=0, arr[100], pos;
    printf("Enter the total elements in the array: ");
    scanf("%d", &n);

    printf("Enter thr array elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    printf("Enter the element to search: ");
    scanf("%d",&value);

    printf("Enter the index that you want to search from: ");
    scanf("%d",&m);

    pos = linear_search(arr,value,m,n);
    if(pos != 0)
       printf("Element found at pos %d", pos);
    
    else
        printf("Element not found");
    
    return 0;
}

int linear_search(int arr[], int value, int index, int n)
{
    int pos =0;

    if(index>= n)
        return 0;
    
    else if(arr[index] == value)
    {
        pos = index + 1;
        return pos;
    }

    else
        return linear_search(arr, value, index+1, n);

    return pos;
}

/*Enter the total elements in the array: 5
Enter thr array elements:
2
3
4
5
6
Enter the element to search: 3
Enter the index that you want to search from: 0
Element found at pos 2 */