#include <stdio.h>
void call_by_value(float num1, float num2)
{
    float temp_storg;
    temp_storg = num1;
    num1 = num2;
    num2 = temp_storg;

    printf("\n\n=> After Swapping Values Using Call By Values (Function)\n");
    printf("=> 1st Value: %0.2f", num1);
    printf("\n=> 2nd Value: %0.2f", num2);
}

void call_by_reference(float *num1, float *num2)
{
    float temp_storg;
    temp_storg = *num1;
    *num1 = *num2;
    *num2 = temp_storg;

    printf("\n\n=> After Swapping Values Using Call By Reference (Function)\n");
    printf("=> 1st Value: %0.2f", *num1);
    printf("\n=> 2nd Value: %0.2f", *num2);
}

void after_proc(float num1, float num2)
{
    printf("\n\n=> After Swapping Stored Values In Main Function\n");
    printf("=> 1st Value: %0.2f", num1);
    printf("\n=> 2nd Value: %0.2f", num2);
}

int main()
{
    float num1, num2;
    printf("Enter 1st Values: ");
    scanf("%f", &num1);
    printf("Enter 2nd Values: ");
    scanf("%f", &num2);

    call_by_value(num1, num2);
    after_proc(num1, num2);
    call_by_reference(&num1, &num2);
    after_proc(num1, num2);

    return 0;
}
