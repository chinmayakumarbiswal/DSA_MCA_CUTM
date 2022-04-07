#include <stdio.h>
int i,j,k,arr1[50],arr2[50],arradd[50],size;
int main()
{
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the element for 1st array \n");
    for(i=0;i<size;i++)
    {
        printf("enter for index %d ",i);
        scanf("%d",&arr1[i]);
    }
    printf("array is = ");
    for(j=0;j<size;j++)
    {
        printf("%d",arr1[j]);
    }


    printf("Enter the element for 2nd array \n");
    for(i=0;i<size;i++)
    {
        printf("enter for index %d ",i);
        scanf("%d",&arr2[i]);
    }
    printf("array is = ");
    for(j=0;j<size;j++)
    {
        printf("%d",arr2[j]);
    }


    for(i=0;i<size;i++)
    {
        arradd[i]=arr1[i]+arr2[i];
    }
    printf("\n Sum of array is = ");
    for(j=0;j<size;j++)
    {
        printf("%d",arradd[j]);
    }
    return 0;
}