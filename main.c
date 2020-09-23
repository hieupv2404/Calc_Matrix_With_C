#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylibrary.h"
int main()
{
int n,m,i,j;
    do
    {
        printf("Nhap so hang ma tran A: ");
    scanf("%d",&n);
    }
    while ( (n<=0) || (n>=10));
    do
    {
    printf("Nhap so cot ma tran A: ");
    scanf("%d",&m);
    }
    while ( (m<=0) || (m>=10));
    float *A[n];
    for(i=0;i<n;i++)
        A[i]=(float*)malloc(m*sizeof(float));
    nhap_MT(A,n,m);
    printf("\t-------------------------------------\n");
    printf("\t             MA TRAN !\n");
    xuat_MT(A,n,m);
    thaotac(A,n,m,0);
for(i=0;i<n;i++) free(A[i]);
free(A);
    return 0;
}
