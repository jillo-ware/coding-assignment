#include<stdio.h>
int main()
{
float age, annualincome;
printf ("enter your age:");
scanf("%f",&age);
printf ("enter value of your annualincome:");
scanf ("%f",& annualincome);
if(age>=21&& annualincome>=21000)
printf("congratulations you have qualify for a loan.");
else 
printf("Unfortunately, we are unable to offer you a loan at this time.");
    return 0;
}