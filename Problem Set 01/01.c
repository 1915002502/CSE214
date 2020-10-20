/*
1. Scan N( take input N from user ) values from user into an array.
Name : Nahar Akter
ID   : 1915002502
*/
#include<stdio.h>
int main()
{
    int a[100], max_size = 100, size = 0;
    int N,i;
    printf("Enter value of N : ");
    scanf("%d",&N);
    ///printf("%d\n",&N);

        if(N<0 || N>max_size)
        if(N>max_size)
        {
            printf("!! Invalid !! Try Again\n\n");
            printf("!!Array Overflow!!\n");
        }

        else
@@ -25,10 +25,6 @@ int main()
                  size++;
                  scanf("%d",&a[i]);
                }
             if(size>max_size)
                {
                  printf("!!Array Overflow!!\n\n");
                }
        }

    return 0;
