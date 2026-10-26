#include <stdio.h>
int main(void)
{
    int num;
    int even_num = 0;
    int odd_num = 0;
    int even_sum = 0;
    int odd_sum = 0;

    printf("Enter integers (0 to quit):\n");

    while (scanf("%d", &num) == 1 && num != 0)
    {
        if (num % 2 == 0)
        {
            even_num++;
            even_sum += num;
        }
        else
        {
            odd_num++;
            odd_sum += num;
        }
    }

    if (even_num == 0 && odd_num == 0)
    {
        printf("No data entered!\n");
        return 0;
    }

    if (even_num > 0)
        printf("Even: count = %d, average = %.2f\n",
               even_num, (double)even_sum / even_num);
    else
        printf("No even integers entered.\n");

    if (odd_num > 0)
        printf("Odd: count = %d, average = %.2f\n",
               odd_num, (double)odd_sum / odd_num);
    else
        printf("No odd integers entered.\n");

    return 0;
}
