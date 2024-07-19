#include<stdio.h>
void main()
{
    int num,count,fact,last_digit,sum=0,temp;
    scanf("%d",&num);
    for(temp=num;num>0;num=num/10)
    {
        fact=1;
        last_digit=num%10;
        for(count=1;count<=last_digit;count++)
        {
            fact=fact*count;
            }
            sum=sum+fact;
            }
            if(sum==temp)
            {
                printf("%d is astrong number\n",temp);
            }
}
