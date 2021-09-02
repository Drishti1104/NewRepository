#include <stdio.h>
#include<iostream.h>
int marks;
printf("\nEnter the marks of the student : ");
scanf("%d", &marks);
if (marks > 0)
{
    switch (marks / 10)
    {
      case 10:
      case 9:
        printf("\nThe student has got Grade A");
        break;
      case 8:
      case 7:
        printf("\nThe student has got Grade B");
        break;
      case 6:
      case 5:
        printf("\nThe student has got Grade C");
        break;
      case 4:
        printf("\nThe student has got Grade D");
        break;
      default:
        printf("\nThe student has failed");
        break;
    }
}
