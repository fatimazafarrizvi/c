#include<stdio.h>
void towerofhanoi(int n, char src, char help, char dest);

int main()
{
    int n;
    printf("Enter no. of disk: ");
    scanf("%d",&n);

    towerofhanoi(n, 'S', 'H', 'D');
    
    return 0;
}

void towerofhanoi(int n, char src, char help, char dest)
{
    if(n==0)
    return;

    towerofhanoi(n-1, src, dest, help);
    printf("Move desk %d from %c to %c.\n", n, src, dest);
    towerofhanoi(n-1, help, src, dest);
}

/*Enter no. of disk: 3
Move desk 1 from S to D.
Move desk 2 from S to H.
Move desk 1 from D to H.
Move desk 3 from S to D.
Move desk 1 from H to S.
Move desk 2 from H to D.
Move desk 1 from S to D.*/