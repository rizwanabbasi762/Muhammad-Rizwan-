#include <stdio.h>
int main(void)
{
    int num1 = 0, num2 = 1, num, newnum;
        printf("Fibonacci Series: ");
    for(num = 1; num <= 8; num++){
        printf("%d ", num1);
        newnum = num1 + num2;
        num1 = num2;
        num2 = newnum;

    }

    return 0;

}
