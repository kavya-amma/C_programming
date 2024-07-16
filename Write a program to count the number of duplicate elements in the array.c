#include<stdio.h>
#define max_size 100
int main()
{
    int arr[max_size];
    int i,j,n,count=0;
    scanf("%d",&n);
    
    printf("enterthe elements in the array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
{
    if(arr[i]==arr[j])
    {
        count++;
        break;
    }
}
}
        printf("the duplicate elements are=%d",count);
        return 0;
    }


