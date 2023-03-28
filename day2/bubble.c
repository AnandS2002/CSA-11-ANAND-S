#include <stdio.h>
int bubble(int[], int);
int main()
{
 int a[20], n, i;
 printf("Enter number of elements\n");
 scanf("%d", &n);
 printf("Enter %d integers\n", n);
 for (i = 0; i < n; i++)
 scanf("%d", &a[i]);
 bubble(a,n);
 printf("Sorted list in ascending order:\n");
 for (i = 0; i < n; i++)
 printf("%d\n", a[i]);
 return 0;
}
int bubble(int a[], int n)
{
 int i, j, t;
 for (i=0;i<n-1;i++)
 {
  for (j=0;j<n-i-1;j++)
  {
   if (a[j] > a[j+1])
    {
     t= a[j];
     a[j]= a[j+1];
     a[j+1]= t;
    }
  }
 }
 return 0;
}



