#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//mera program.

bool isSafe(int** arr,int x, int y, int n)
{
    //to check row-wise
    for(int row =0;row<x;row++)
    {
        if(arr[row][y]==1) //we will place 1 instead of queen.
        return false;// false means you can't place in that place as queen is there.
    }
   // to check left diagnal, col and row both dec.
    int row = x;
    int col = y;
    while(row>=0 && col>=0) // more equal to 0 to check it does not go out of chess board i.e -1..
    {
        if(arr[row][col]==1)
        return false;

        row--;
        col--;
    }
    //to check right diagnal, col inc and row dec.
    row = x;
    col = y;
    while(row>=0 && col<n) // less than n to check it does not go out of chess board.
    {
        if(arr[row][col]==1)
        return false;

        row--;
        col++;
    }

    return true; 
}

bool n_queen(int** arr, int x, int n) //we don't need y i.e for col as and once we place in a col we move to next automatically. 
{
   if(x>=n) //this means we have placed queens more then n i.e size of board.
   return true; // means its full now.

   for(int col=0;col<n;col++){ //placing queen.
    if(isSafe(arr,x,col,n)){
     arr[x][col]=1;

     //checking for next row
     if(n_queen(arr,x+1,n))
       return true;

      arr[x][col]=0; //backtracking
     }
  }
  return false; //when we can't place in any col of that row 

}

int main()
{
    int n;
    printf("Enter the size of n*n chessboard: ");
    scanf("%d",&n);

    int** arr = (int**)malloc(n * sizeof(int*));
    
    for (int i = 0; i < n; i++) {
    arr[i] = (int*)malloc(n * sizeof(int));

        for(int j=0;j<n;j++)
           arr[i][j]=0;
    }

    if(n_queen(arr,0,n))
    {
        for(int i=0; i<n;i++)
    {
        for(int j=0;j<n;j++)
           printf("%d ",arr[i][j]);

        printf("\n");   
    }
    
    }
    return 0;
}
/*
Enter the size of n*n chessboard: 8
1 0 0 0 0 0 0 0 
0 0 0 0 1 0 0 0 
0 0 0 0 0 0 0 1
0 0 0 0 0 1 0 0
0 0 1 0 0 0 0 0
0 0 0 0 0 0 1 0
0 1 0 0 0 0 0 0
0 0 0 1 0 0 0 0*/