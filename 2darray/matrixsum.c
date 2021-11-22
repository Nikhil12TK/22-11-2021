#include"header.h"
void matrixsum(int mat1[3][3], int mat2[3][3], int res[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(*(res + i) + j) =(*(*(mat1 + i) + j))+(*(*(mat2 + i) + j));
        }
    }
