#include<stdio.h>
void main()
{
    int a[10],sum=0,flag=0;
    printf("enter array elements");
    for(int i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
      sum+=a[i];
    }
    for(int i=2;i<sum/2;i++)
    {
      if(sum%i==0)
      {
        flag=0;
        break;
      }
      else{
        flag=1;
      }
    }
    if(flag==0)
    {
      printf("Sum %d  is not prime",sum);
    }
    else{
      printf("Sum %d  is  prime",sum);
    }
    
}