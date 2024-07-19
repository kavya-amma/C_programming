#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
}
j = 0;
for(i=0;i<n;i++)
{
    if(arr[i]<0)
    {
        if(i!=j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
            j++;
    }
}
printf("the resultant array:");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}

            
    
