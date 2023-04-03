#include <stdio.h>

int main() 
{
    int num;
    printf("Enter the value : ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("%d is is positive number.\n", num);
    }
    else if(num < 0)
    {
        printf("%d is negative.\n", num);
    }

    else{
        printf("%d is zero.\n", num);
    }
    
    return 0;
}