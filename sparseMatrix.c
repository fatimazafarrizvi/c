//write a program that will take sparce matrix as input and retur its three tuple form

#include<stdio.h>
void sparse(int sm[][100], int ttf[][3], int m, int n);

int main()
{
    int sm[100][100], ttf[100][3], i,j,m,n,count=0;
    printf("Enter the no. of rows of the elements in sparse matrix: ");
    scanf("%d",&m);

    printf("Enter the no. of columns of the elements in sparse matrix: ");
    scanf("%d",&n);
    
    printf("Enter the array elements: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            //printf("sm[%d][%d] = ", i,j);
            scanf("%d",&sm[i][j]);
            if(sm[i][j]!=0)
            {
                count++;
            }
        }
    }

    

    sparse(sm,ttf,m,n);
    printf("Matrix in three tuple form: \n");
    for(i=0;i<=count;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",ttf[i][j]);
        }
        printf("\n");
    }
}

void sparse(int sm[][100], int ttf[][3], int m, int n)
{
    int i,j,k=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(sm[i][j] != 0)
            {
                ttf[k][0] = i;
                ttf[k][1] = j;
                ttf[k][2] = sm[i][j];
                k++;
            }
        }
    }
    ttf[0][0]=m;
    ttf[0][1]=n;
    ttf[0][2]=k-1;
}

/*
Enter the no. of rows of the elements in sparse matrix: 4
Enter the no. of columns of the elements in sparse matrix: 4
Enter the array elements: 
0 0 0 1
0 0 0 22
0 0 0 3
0 0 0 4
Matrix in three tuple form: 
  4  4  4
  0  3  1
  1  3 22
  2  3  3
  3  3  4*/