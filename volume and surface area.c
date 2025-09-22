//Hello World;
/*
Name: khamisi jillo;
Registration number:PA106/G/28796/25;
Description: A c program to find volume and surface area of a given figure;
*/

# include <stdio.h> // preprocessor directive;
#define PI 3.142 // Define the value of π

int main()
{
float radius, height, volume, surfacearea ;

// prompt the user for input 
printf("Enter the radius of the cylinder:");
scanf("%f",& radius);

printf("Enter the height of the cylinder:");
  scanf("%f",& height);
  
  // calculate volume and surface area
  volume= PI * radius * radius * height;
  surfacearea=( 2 * PI * radius* radius)+(2 * PI * radius * height );
  
  // output results 
  printf("Volume of the cylinder: %.2f\n", volume);
  printf("surfacearea of the cylinder:%.2f\n", surfacearea);
  
    return 0;
    }