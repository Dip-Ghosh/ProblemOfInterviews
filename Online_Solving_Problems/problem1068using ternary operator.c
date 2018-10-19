#include<stdio.h>
int main()
{

    int a;
    scanf("%d",&a);
    printf("%d",a>0?a*(a+1)/2:1+a*(1-a)/2);
    return 0;


}
