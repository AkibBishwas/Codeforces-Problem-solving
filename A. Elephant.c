#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/5;
    c=b+1;
    if(a%5==0)
    {
        printf("%d",b);
    }
    else
    {
    printf("%d",c);
    }
    return 0;
}
