#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  char str[30];
  int count=0;
  printf("Enter the string");
  gets(str);
  for(int i=0;i<strlen(str);i++)
  {
    if(str[i]=='*')
    {
      count++;
    }
    else if(str[i]=='#')
    {
      count--;
    }
    else{
       printf("INVALID INPUT");
       exit(0); 
    }
  }
  if(count>0)
  {
    printf("%d",count);
  }
  else if(count<0)
  {
    printf("%d",count);
  }
  else
  {
    printf("%d",count);
  }

}
