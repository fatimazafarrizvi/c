#include<stdio.h>
int power(int n1, int n2);
int main()
{
    int base, a, result;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter power only positive number: ");
    scanf("%d", &a);
    result = power(base,a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a)
{
    if(a != 0)
       return(base * power(base, a-1)); //a-1 q ki aur koi tarikha he nhi hai isme recursive call karne ka
    else
       return 1;
}

/*Enter base: 12
Enter power only positive number: 2
12^2 = 144*/