#include <stdio.h>

int get_highest_value(int numbers[10]);

int main(void)
{
    int n, numbers[10] = {205, 10, 206, 1, 600, 9, 400, 100, 5, 300};

    printf("The number with the greatest value is: %i", get_highest_value(numbers));

    return 0;
}

int get_highest_value(int numbers[10])
{
    int n = 0;

    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
            if (numbers[i] < numbers[j] && numbers[j] > n)
                n = numbers[j];
            else if (numbers[i] > numbers[j] && numbers[i] > n)
                n = numbers[i];

    return n;
}