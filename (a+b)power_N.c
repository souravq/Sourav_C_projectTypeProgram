#include <stdio.h>
#include <stdlib.h>
long int fact(long int);
int main()
{
    long int n,i;
    printf("(a+b)^n.........\n");
    printf("Enter the value of (a+b) power:");
    scanf("%ld",&n);
    printf("\n(a+b)^%ld=",n);
    printf("a^%ld+",n);
    for(i=1;i<=n-1;i++)
    {
     printf("%ld",(fact(n)/(fact(i)*fact(n-i))));
     printf("a^%ldb^%ld+",n-i,i);
    }
    printf("b^%ld",n);

    return 0;
}
long int fact(long int n)
{
    if(n==1)
        return;
    else
        return(n*fact(n-1));
}
