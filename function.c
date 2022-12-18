
#include<stdio.h>

int rec(int n);
void main()
{

    int number = 5 ;
    int result;
    result = rec(number);
    printf("The Factorial is = %d",result);
   // getch();

}


int rec(int n)
{
    int k;
    if(n==0)
        return 1;
    else
        return k = n*rec(n-1);

}
