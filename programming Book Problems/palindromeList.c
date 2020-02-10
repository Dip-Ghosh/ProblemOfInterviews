#include<stdio.h>
int main()
{
    int n,reverse = 0, list, remainder;
    scanf("%d",&n);
    int i;
    for( i = 1; i <= n ;i++)
    {
        while(i != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        i = i / 10;
    }

    }
      printf("Palindrome = %d\n ",reverse);

    return 0;
}

