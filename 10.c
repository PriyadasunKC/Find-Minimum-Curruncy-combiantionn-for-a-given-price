#include <stdio.h>
int findBigValueUsingBysmallestValues();
int main()
{
    findBigValueUsingBysmallestValues();
    return 0;
}

int findBigValueUsingBysmallestValues()
{

    int number = 0;
    int ones = 0;
    int twos = 0;
    int fives = 0;
    int tens = 0;
    int fiftys = 0;
    int hundreds = 0;

    printf("Enter Number : ");
    scanf("%d", &number);

    hundreds = number / 100;
    fiftys = (number - (hundreds * 100)) / 50;
    tens = (number - (hundreds * 100) - (fiftys * 50)) / 10;
    fives = (number - (hundreds * 100) - (fiftys * 50) - (tens * 10)) / 5;
    twos = (number - (hundreds * 100) - (fiftys * 50) - (tens * 10) - (fives * 5)) / 2;
    ones = (number - (hundreds * 100) - (fiftys * 50) - (tens * 10) - (fives * 5) - (twos * 2)) / 1;

    printf("Note Combination\n\n- 100s \t: %d\n- 50s \t: %d\n- 10s \t: %d\n- 5s \t: %d\n- 2s \t: %d\n- 1s \t: %d", hundreds, fiftys, tens, fives, twos, ones);
    return 0;
}
