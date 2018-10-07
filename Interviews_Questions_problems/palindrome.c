#include<stdio.h>
int palindrome(int n);
int main()
{

    int x;
    scanf("%d",&x);
    palindrome(x);
    return 0;
}
int palindrome(int n)
{
     int r,re=0;
    while(n !=0)
    {

        r=n%10;
        re=r+re*10;
        n=n/10;
    }
    if(n==re)
    {
        printf("Palindrome");
    }
   else
    {
        printf("Not Palindrome");
    }
}
