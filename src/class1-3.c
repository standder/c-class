#include <stdio.h>

int main()
{
        int integer1;
        int integer2;
        printf("Please input first integer:\n");
        scanf("%d",&integer1);
        printf("Please input second integer:\n");
        scanf("%d",&integer2);
        int sum = integer2 + integer1;
        printf("Sum is %d\n",sum);
        return 0;
}
