//Simple hello World program
/*
Name:khamisi jillo doyo 
Reg no:PA106/G/28796/25
) Description: Prorams to show ATM withdrawal 
*/
#include<stdio.h>
int main()
{
float withdraw, balance, accountbalance;
printf("Enter account balance:");
scanf("%f", & accountbalance);
printf("Enter amount to be withdrawn:");
scanf("%f",& withdraw);

scanf("%f",& balance);
balance =accountbalance - withdraw;

if(balance<=0)
printf("you have insufficient funds");
return 0;
}