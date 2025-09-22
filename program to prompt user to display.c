//Hello World;
/*
Name: khamisi jillo;
Registration number:PA106/G/28796/25;
Description: A c program to prompt the user to enter and display height ,ID no.and bank balance;
*/

# include <stdio.h> // preprocessor directive;
int main()
{
int height;
  printf("Enter your height:");
    scanf("%a",& height);
    printf("your height is %a", height);
    
    int  number;
    printf("Enter your ID number:");
    scanf("%a",&  number);
    printf("your ID number is%a", number);
    
    int  balance ;
    printf("Enter your bank balance:");
    scanf("%a",&  balance);
    printf("your balance is %a",  balance);
    
    return 0;
    }