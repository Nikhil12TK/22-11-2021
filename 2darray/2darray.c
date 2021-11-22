#include "header.h"
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
        printf("\nEnter First matrix for 3X3 matrix");
        matrixInput(a);
       
        printf("\nEnter Second matrix for 3X3 matrix");
        matrixInput(b);

         
        matrixsum(a,b,c);

        printf("Product of entered matrices :-\n");

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("%d\t",*(*(c + i) + j));
            printf("\n");
        }
    return 0;
}
