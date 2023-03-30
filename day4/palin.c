#include<stdio.h>
#include<string.h>
void main()
{
    char string[100];
    int len,flag=0;
    printf("\nenter the string");
    gets(string);
    len=strlen(string);
    
    for (int i=0;i<len/2;i++)
    {
      if(string[i]!=string[len-i-1])
      {
        
        flag=0;
        break;

      }
      else
      {
        flag=1;
      }
    }
    if(flag==1)
    {
      printf("String is  palindrome");
    }
    else{
      printf("String is not palindrome");
    }
}