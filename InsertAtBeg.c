#include <stdio.h>
int i,j,k,arr[50],l,newn,size;
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

    printf("\n Enter the  no which is stored in 1st position :");
    scanf("%d",&newn);

    
    for(k=size;k>=0;k--)
    {
        arr[k]=arr[k-1];
    }
    
    size++;
    arr[0]=newn;
    printf("\n New array is :");
    for(l=0;l<size;l++)
    {
        printf("%d",arr[l]);
    }
    return 0;
}