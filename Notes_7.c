#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number ");
    scanf("%d", &num);
    if (num < 10)
    {
        printf("Number is less than 10");
        printf("Number=%d", num);
        printf("number is not greater than 10");
    }
}