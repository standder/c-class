#include <stdio.h>

int main()
{
        int i = 1;
        int sum = 0;
        while (i < 6) {
                int number;
                printf("Please input a number:\n");
                scanf("%d",&number);
                sum = sum + number;
                i = i + 1;
        };
        printf("Sum is %d\n",sum);
        return 0;
}
