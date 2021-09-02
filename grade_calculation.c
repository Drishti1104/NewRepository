#include<iostream.h>
#include<stdio.h>
int marks, total;
float percentage;
printf("Enter the marks of the student : ");
scanf("%d",&marks);
printf("Enter the total marks : ");
scanf("%d",&total);
percentage = (marks/total)*100;
if(percentage>=90)
{
  printf("The student has got A GRADE");
}
else if(90<percentage<=75)
{
  printf("The student has got B GRADE");
}
else if(75<percentage<=60)
{
  printf("The student has got C GRADE");
}
else if(60<percentage<=45)
{
  printf("The student has got D GRADE");
}
else if(45<percentage<=30)
{
  printf("The student has got E GRADE");
}
else
{
  printf("The student has failed");
}
