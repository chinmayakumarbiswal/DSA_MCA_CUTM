#include <stdio.h>
int i,j,arr[50],size;
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
        printf("\n arr[%d] = %d",j,arr[j]);
    }

    return 0;
}