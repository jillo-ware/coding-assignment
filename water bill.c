//Simple hello World program
/*
Name:khamisi jillo doyo 
Reg no:PA106/G/28796/25
) Description: Prorams to display eligibility for the final exams;
*/
#include<stdio.h>
int main()
{
float water_units,bill;
printf("Enter amount of water units consumed:");
scanf("%f",&water_units);
if(water_units<=30){bill= water_units * 20;
}
else if(water_units>30&&water_units<=60){bill= water_units * 25;
}
else if(water_units>60){bill=water_units * 30;
}
printf("Total bill:%.2fKes\n",bill);
return 0;
}