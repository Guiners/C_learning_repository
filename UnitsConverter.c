#include<stdio.h>



int main(void)
{
    int userNumber;
    int outputNumber;
    int userUnitNumber;
    int outputUnitNumber;
    /// wsadzić to wszystko w petle while
    printf("What type of units you want to convert:\n");
    printf("1. WEIGHT, 2. HEIGHT, 3. SPEED, 4. TEMPERATURE\n");
    printf("Enter number:");
    scanf("%d", &userUnitNumber);
    printf("Enter value you want convert:");
    scanf("%d", &userNumber);

    if (userUnitNumber == 1)
    {
        printf("What unit you want to convert from:\n");
        printf("1. KG, 2. LB\n");
        printf("Enter number:");
        scanf("%d", &outputUnitNumber);
        if (outputUnitNumber == 1){
            printf("Converting KG to LB\n");
            outputNumber = userNumber * 2.2046;
        }
        else if (userUnitNumber == 2)
        {
            printf("Converting LB to KG");
            outputNumber = userNumber / 2.2046;
        }
        else{
            printf("Given number is invalid");
        }

    }
    else if (userUnitNumber == 2)
    {
        printf("What unit you want to convert from:\n");
        printf("1. CM, 2. INCH\n");
        printf("Enter number:");
        scanf("%d", &outputUnitNumber);
        if (outputUnitNumber == 1){
            printf("Converting CM to INCH\n");
            outputNumber = userNumber * 0.393700787;
        }
        else if (userUnitNumber == 2)
        {
            printf("Converting INCH to CM");
            outputNumber = userNumber / 0.393700787;
        }
        else
        {
            printf("Given number is invalid");
        }
    }
    else if (userUnitNumber == 3)
    {
        printf("What unit you want to convert from:\n");
        printf("1. KM/H, 2. MP/H\n");
        printf("Enter number:");
        scanf("%d", &outputUnitNumber);
        if (outputUnitNumber == 1){
            printf("Converting KM/H to MP/H\n");
            outputNumber = userNumber * 0.621371192;
        }
        else if (userUnitNumber == 2)
        {
            printf("Converting MP/H to KM/H");
            outputNumber = userNumber / 0.621371192;
        }
        else
        {
            printf("Given number is invalid");
        }
    }
 else if (userUnitNumber == 4)
    {
        printf("What unit you want to convert from:\n");
        printf("1. CELSIUS, 2. FARENHEIT\n");
        printf("Enter number:");
        scanf("%d", &outputUnitNumber);
        if (outputUnitNumber == 1){
            printf("Converting CELSIUS to FARENHEIT\n");
            outputNumber = (userNumber * 9/5) + 32;
        }
        else if (userUnitNumber == 2)
        {
            printf("Converting FARENHEIT to CELSIUS");
            outputNumber = (userNumber - 32) * 5/9;
        }
        else
        {
            printf("Given number is invalid");
        }
    }
    else
    {
        printf("Given number is invalid try again");
    }
    return 0;
}