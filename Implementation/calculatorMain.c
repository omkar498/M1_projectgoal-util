#include"calculator.h"
int main()
{
    printf("\t\tscientific calculator!!\n\n");
    int choice;
    printf("\n******* Press 0 to quit the program ********\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Power \n");
    printf("Enter 6 for Factorial \n");
    printf("Enter 7  for square \n");
    printf("Enter 8  for cube \n");
    printf("Enter 9 for squareroot\n\n");

   while(1){    
    printf("\n\nEnter the operation you want to do: ");
    
    scanf("%d",&choice);
            
    switch(choice)
    {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    power();
                    break;
                case 6:
                    factorial();
                    break;
                case 7:
                    square();
                    break;
                case 8:
                    cube();
                    break;
                case 9:
                    squareroot();
                    break;
                case 0:
                    exit(0);
                default:
                    printf("\n********** %s ***********\n",note);
        }
    
    }
    return 0;
}