#include <cstdio>

// 1-1 
int absolute_value(int x)
{
    if (x >= 0)
        return x;
    else
        return -x;
}

// 1-4
int sum(int a, int b)
{
    return a + b;
}

int main(int argc, char* argv[])
{
    // 1-1
    // int my_num = -52;
    // printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));

    // 1-4
    int num1 = 55;
    int num2 = 35;

    printf("The sum of %d and %d is %d.\n", num1, num2, sum(num1, num2));
}
