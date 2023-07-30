#include <stdio.h>
#include "file_2.h"

int main()
{
    int num_1, num_2,result;

    printf("anuja\n");

    printf("Enter two numbers you would like to do subtract:\n");
    scanf("%d %d", &num_1, &num_2);
    subtraction(num_1, num_2, &result); // function call
    printf("Subtraction:%d\n", result);

    return 0;
}