#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3];
    for (int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("A[%d][%d]= " , i,j);
            scanf("%d" , & A[i][j]);
        }
    }
    printf("Matrix A is : \n");
    for (int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("%d " , A[i][j]);
            
        }
        printf("\n");
    }
     for (int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("B[%d][%d]= " , i,j);
            scanf("%d" , & B[i][j]);
        }
    }
    printf("Matrix B is : \n");
    for (int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("%d " , B[i][j]);
            
        }
        printf("\n");
    }
    printf("Matrix C = A + B  is \n");
     for (int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("%d " , A[i][j] + B[i][j]);
            
        }
        printf("\n");
    }

}
