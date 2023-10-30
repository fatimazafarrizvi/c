#include<stdio.h>
int nCr(int n, int r);
// incomplete
int main()
{
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    printf("%d",nCr(n,r));
    return 0;
}

int nCr(int n, int r){
   if(r==0||n==r)
      return 1;
   else if(n>r)
      return nCr(n-1, r) + nCr(n-1, r-1);
   return 0;
}

// this is part of tree,
/*
                C(4,2)
              /       \
        C(3,1)  +      C(3,2)      nCr(4-1,2-1) + nCr(4-1, 2) this is how recursive function is working.
       /     \         /       \
    C(2,0) + C(2,1)   C(2,1) +  C(2,2)  in C(2,0) r=0 so 1 and C(2,2) r=n so 1
    |      /    \      /    \       |
    1   C(1,0)+C(1,1) C(1,0)+C(1,1) 1
           |      |      |      |
           1      1      1      1

           ADDIND all the one we get 6. i.e 4C2           
            
 Enter n: 4
 Enter r: 2
 6           
            
            */