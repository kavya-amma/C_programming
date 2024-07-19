#include<stdio.h>
int main()
{
    int a[2][2]={{0,1},{2,3}};
    int search=2;
    for(int i=0;i<2;i++)
    {
    for(int j=0;j<2;j++)
    {
        if(a[i][j]==search)
        {
            printf("elements is found at(%d,%d)position",i,j);
        }
    
    }
    }
}
