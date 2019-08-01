#include <stdio.h>

float x,y;
char m;

int main()
{
    printf("Enter the first number:");
    if (scanf("%f",&x) != 1)
    {
        printf("Invalid input! Enter a decimal number");
        return 1;
    }
    printf("Enter the operator:");
    scanf("%s",&m);

    printf("Enter the second number:");
    if (scanf("%f",&y) != 1)
    {
        printf("Invalid input! Enter a decimal number");
        return 1;
    }

    switch (m){

        case '+' :
        printf("%.2f+%.2f=%.2f",x,y,x+y);
        break;
        case '-' :
        printf("%.2f-%.2f=%.2f",x,y,x-y);
        break;
        case '*' :
        printf("%.2f*%.2f=%.2f",x,y,x*y);
        break;
        case '/' :
               if (y == 0){
               printf("Error: Zero devision abortion");
               }
               else
               {printf("%.2f/%.2f=%.2f",x,y,x/y);}
        break;
        default:
        printf("Error! Check the operator");
        break;
    }

    return 0;
}
