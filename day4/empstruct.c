#include <stdio.h>
struct employee
{
  int id;
  char name[20];
  int phone[10];
  float sal;
} e[3];

void main()
{
  for (int i = 0; i < 3; i++)
  {
    printf("\nEnter the Employee id");
    scanf("%d", &e[i].id);
    printf("\nEnter the Employee name");
    scanf("%s",e[i].name);
    printf("\nEnter the Employee phone");
    for (int j = 0; j < 10; j++)
      scanf("%d", &e[i].phone[j]);
    printf("Enter the Employee salary");
    scanf("%d", &e[i].sal);
  }
  for (int i = 0; i < 3; i++)
  {
    printf("Details of Employee %d", i + 1);
    printf("ID : %d\n", e[i].id);
    printf("Name :");
    puts(e[i].name);
    printf("\nPhone : ");
    for (int j = 0; j < 10; j++)
      printf("%d", e[i].phone[j]);
    printf("\nSalary : Rs.%d", e[i].sal);
  }
}