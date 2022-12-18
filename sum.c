#include<stdio.h>


void main()
{

    int arr[5][5]= {
        {20,5,60,40,21},
        {10,15,12,11,26},
        {0,1,9,8,7},
        {2,3,4,5,6},
        {1,2,3,4,5},
    };
//int sum = 0;
    int max=arr[0][0];

    for(int i=0; i<=5; i++)
    {
        for(int j=0; j<=5; j++)
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("max = %d",max);
    getchar();
}
