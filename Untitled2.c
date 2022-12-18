#include<stdio.h>

void arr2D();
void main ()
{
    arr2D ();
    myName();
}
void arr2D ()
{
    int i,j;
    int arr [4][4]=
    {
        {1,6,8,9},
        {1,6,3,2},
        {7,9,5,4},
        {3,7,9,5}

    };

    //sudu array value

    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //sum array value

    int sum=0;
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {

            sum = sum+arr[i][j];
        }
    }
    printf(" Result of array  =%d\n",sum);



    //min > max array value

    int min = arr[0][0];
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }
    printf(" Minimum value =%d\n",min);

}


void myName()
{

    char name = "baizid" ;

    printf("My name is = %c\n",name);

}


