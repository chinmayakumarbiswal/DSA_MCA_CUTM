#include <stdio.h>
int i,j,k,arr[50],l,newn,size,location;
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
    for(j=0;j<5;j++)
    {
        printf("%d",arr[j]);
    }

    printf("\n Enter the new element position");
    scanf("%d",&location);
    printf("\n Enter the  no");
    scanf("%d",&newn);

    
    for(k=size;k>=location;k--)
    {
        arr[k]=arr[k-1];
    }
    
    size++;
    arr[location-1]=newn;
    for(l=0;l<size;l++)
    {
        printf("%d",arr[l]);
    }
    return 0;
}