/*
4. Print entire array each element in newline.
Name : Nahar Akter
ID   : 1915002502
*/
#include<stdio.h>
int main()
{
    int a[100] = {1,2,3,4,5,6,7,8,9,10}, max_size = 100, size = 10;
    int i;

    printf("Before :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n\n");

    printf("After :\n");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
        if(i<=size-2)
        {
            printf("\n");
        }
    }
     printf("\n");

    return 0;
}
