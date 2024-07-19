#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[]={1,2,3,4,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int smallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
printf("smallest element is:%d\n",smallest);
int second_smallest=INT_MAX;
for(int i=0;i<n;i++)
{
    if(arr[i]<second_smallest && arr[i]>smallest)
    {
        second_smallest=arr[i];
    }
}
printf("second smallest element is:%d",second_smallest);
return 0;
}
