#include<stdio.h>
void main()
{
    char a[10],b[10];
    printf("enter array elements");
    for(int i=0;i<10;i++)
    {
      scanf("%c",&a[i]);
      b[10-i-1]=a[i];
      
    }
    for(int i=0;i<10;i++ )
    {
        if(b[i]=='0')
        {
            b[i]='$';
        }

    }
    printf("new array\n");
    for(int i=0;i<10;i++)
    {
      printf("%c",b[i]);
      
    }


    
}