// write a recursive function

#include<stdio.h>

int sum(int n);

int main()
{
    int result = sum(5);
    printf("the factorial is = %d ",result);

}


int sum(int n)
{

    if(n != 0)
        return  n + sum(n-1); // 5 =  5 + 4 + 3 +2 + 1 =15;

    else
        return n;

}
