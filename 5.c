// 5. Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    /*
    int i;
    for ( i = 19; i >=1; i-=2)
    {
        printf("%d\n",i);
    } */
    int n=5 ,i;
    for(i=1 ; i<=10 ; i++)
        printf("%d x %d = %d\n",n,i,5*i);
    return 0;
}