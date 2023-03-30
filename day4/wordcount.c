#include<stdio.h>
#include<string.h>
void main()
{
    char string[100];
    int len,count=0;
    printf("\nenter the string");
    gets(string);
    len=strlen(string);

    for(int i=0;i<len;i++)
    {
      if(string[i]==' ')
      {
        count++;
      }
    }
    count++;
    printf("The number of words in the string is %d",count);
}