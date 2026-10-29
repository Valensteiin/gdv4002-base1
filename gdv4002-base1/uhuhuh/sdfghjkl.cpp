#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int a;
    int b;

    a = 5;

    printf("The value of a is %d\n", a);

    printf("Please enter b:\n");
    scanf_s("%d", &b);

    printf("The value of b is %d\n", b);

    exit(0);
}
