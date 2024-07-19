#include<stdio.h>
int main()
{
    int arr[50],i,j,k,count=0,dup[50],number;
    scanf("%d",&number);
    printf("enter the elements of the array:");
    for(i=0;i<number;i++)
    {
        scanf("%d",&arr[i]);
        dup[i]=-1;
    }
    for(i=0;i<number;i++)
    {
        for(j=i+1;j<number;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<number;k++)
                {
                arr[k]=arr[k+1];
            }
            j--;
            number--;
        }
    }
}
printf("after deleting the elements the array is\n:");
for(i=0;i<number;i++)
printf("%d ",arr[i]);
}
