#include"header.h"
void matrixInput(int mat[3][3])
{
    int row, col;
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d", (*(mat + row) + col));
        }
    }
}
