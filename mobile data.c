#include <stdio.h>
#include<math.h>
int main() 
{
int choice ;

printf("Mobile Data Bundle Purchase\n");
printf("Option\tBundle\tCost(KES)\n");
printf("1\t100MB\t50\n");
printf("2\t500MB\t200\n");
printf("3\t1GB\t350\n");
printf("4\t2GB\t600\n");

printf("Enter your choice (1-4):");
scanf("%d",&choice);

switch (choice) { 
       case 1:
  printf("You selected: 100 MB - Cost:50 KES");
         break;
        case 2:
  printf("You selected: 500 MB - Cost:200 KES");
          break; 
        case 3:
  printf ("You selected: 1 GB - Cost:350 KES");
           break;
        case 4:
  printf ("You selected: 2 GB - Cost:600 KES");
            break;
         default:
  printf ("Invalid choice! Please select between 1 and 4.");
  }
return 0;
}

    