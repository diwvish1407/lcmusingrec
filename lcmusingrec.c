#include <stdio.h>

int num1, num2, LCM;

int rec_lcm()
{
    static int i = 1;
    if (i % num1 == 0 && i % num2 == 0)
    {
        return i;
    }
    else
    {
        i++;
        rec_lcm();
        return i;
    }
}

int main()
{
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    LCM = rec_lcm();
    printf("LCM of %d and %d is %d.", num1, num2, LCM);

    return 0;
}
