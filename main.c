#include <stdio.h>
#include <stdlib.h>

/*int main()                                      //Question 1
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    int sum=naturalSum(n);
    printf("sum of n natural numbers is %d:",sum);
    return 0;
}

int naturalSum(int n)
{
    if(n==1)
        return 1;
    return (n + naturalSum(n-1));
}*/



/*int main()                                      //Question 2
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    int sum=naturaloddSum(n);
    printf("sum of first n odd natural numbers is %d:",sum);
    return 0;
}

int naturaloddSum(int n)
{
    if(n==1)
        return 1;
    return (2*n-1 + naturaloddSum(n-1));
}*/


/*int main()                                      //Question 3
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    int sum=naturaloddSum(n);
    printf("sum of first n odd natural numbers is %d:",sum);
    return 0;
}

int naturaloddSum(int n)
{
    if(n==1)
        return 1;
    return (2*n-1 + naturaloddSum(n-1));
}*/



/*int main()                                      //Question 4
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    int sum=squareSum(n);
    printf("sum of first n odd natural numbers is %d:",sum);
    return 0;
}

int squareSum(int n)
{
    if(n==1)
        return 1;
    return ((n*n) + squareSum(n-1));
}*/



/*int main()                                      //Question 5
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    int sum=digitSum(n);
    printf("sum of first n odd natural numbers is %d:",sum);
    return 0;
}

int digitSum(int n)
{
    if(n<10)
        return n;
    return ((n%10) + digitSum(n/10));
}*/



/*int main()                                      //Question 6
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    int sum=fact(n);
    printf("sum of first n odd natural numbers is %d:",sum);
    return 0;
}

int fact(int n)
{
    if(n==1)
        return 1;
    return (n*fact(n-1));
}*/


/*int main()                                      //Question 7
{
    int n1,n2;
    printf("Enter two number\n");
    scanf("%d%d",&n1,&n2);
    int sum=hcf(n1,n2);
    printf("hcf of %d and %d number is %d",n1,n2,sum);
    return 0;
}

int hcf(int n,int m)
{
    if(n>m)
    {
        if(n%m==0)
            return m;
        return hcf(n%m,m);
    }
    if(n<m)
    {
        if(m%n==0)
            return n;
    return (hcf(m%n,n));
}
}*/

/*int main()                                      //Question 8
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
    printf("%d",fibo(i));
    }
    return 0;
}

int fibo(int n)
{
    if(n==1 || n==0)
        return n;
    return (fibo(n-1)+fibo(n-2));
}*/



/*int main()                                              //Question 9
{
    int n,cnt;
    printf("enter a number\n");
    scanf("%d",&n);

    cnt=digitCount(n);
    printf("total digits in the number is=%d",cnt);
}

int digitCount(int n)
{
    if(n<10)
        return 1;
    return 1 + digitCount(n/10);
}*/


/*int main()                                                          //Question 10
{
    int b,e,result;
    printf("enter base and exponent\n");
    scanf("%d%d",&b,&e);
    result=powe(b,e);
    printf("%d^%d is=%d",b,e,result);
    return 0;
}

int powe(int base, int exponent)
{
    if(exponent==0)
        return 1;
    return (base * powe(base,exponent-1));
}*/

