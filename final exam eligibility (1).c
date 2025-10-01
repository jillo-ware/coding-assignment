//Simple hello World program
/*
Name:khamisi jillo doyo 
Reg no:PA106/G/28796/25
) Description: Prorams to display eligibility for the final exams;
*/
#include<stdio.h>
int main()
{
float Attendance, Average_marks;
printf("enter value of Attendance:");
scanf("%f",& Attendance);
printf("enter value of Average_marks:");
scanf("%f",& Average_marks);
if(Attendance>=75 && Average_marks>=40)

printf("You qualify final exams ");
else
printf("sorry you ,you are not eligible for  your final exams");
return 0;
}