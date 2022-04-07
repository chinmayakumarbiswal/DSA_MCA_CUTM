#include <stdio.h>
int i,j,k,arr[50],l,size;
int main()
{
    printf("Enter the size of array");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("enter for index %d ",i);
        scanf("%d",&arr[i]);
    }
    printf("array is = ");
    for(j=0;j<size;j++)
    {
        printf("%d",arr[j]);
    }

    for(k=0;k<size;k++)
    {
        arr[k]=arr[k+1];
    }
    printf("\n New array is");
    for(l=0;l<size-1;l++)
    {
        printf("%d",arr[l]);
    }
    return 0;
}