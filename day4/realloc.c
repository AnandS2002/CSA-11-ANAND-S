#include<stdio.h>
#include<stdlib.h>

void main()
{
  int n;
  printf("\nEnter the size of array");
  scanf("%d",&n);
  int * ptr=calloc(n,sizeof(int));
  if(ptr==NULL)
  {
      printf("\nUnable to allocate memory");
      exit(0);
  }
  printf("\nenter array elements");
  for(int i=0;i<n;i++)
  {
    scanf("%d",ptr+i);

  }
  printf("\nGiven array");
  for(int i=0;i<n;i++)
  {
    printf("%d",*(ptr+i));

  }
  printf("\n");
  printf("removing the first element");
  for(int i=1;i<n;i++)
  {
    ptr[i-1]=ptr[i];
    
  }
  ptr=realloc(ptr,(n-1)*sizeof(int));
  printf("\nModified  array");
  for(int i=0;i<n-1;i++)
  {
    printf("%d",ptr[i]);

  }
  printf("\n");
  free(ptr);

}